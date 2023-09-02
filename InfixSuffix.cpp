#include <stack>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
bool checkOperand(char c){
	if (c=='*'||c=='+'||c=='-'||c=='/'||c=='('||c==')')return true;
	else return false;
}
bool prcd(char a, char b){
	if ((a=='+'||a=='-')&&(b=='*'||b=='/'))return false;
	else if ((a=='+'||a=='-')&&(b=='('||b==')'))return false;
	else if ((a=='*'||a=='/')&&(b=='('||b==')'))return false;
	else return true;
}
int main(){
	char symbol, c;
	string Input, PostFix="";
	cout<<"Input Formula"<<endl;
	cin>>Input;
	stack<char> Operator;
	for (int i = 0; i<Input.size();i++){
		symbol=Input[i];
		if(!checkOperand(symbol)){
			Operator.push(symbol);
		}
		else{
			while(!Operator.empty()&&prcd(Operator.top(),symbol)){
				c=Operator.top();
				Operator.pop();
				if (c!='(') PostFix+=c;
				else break;
			}
		if (symbol != ')') Operator.push(symbol);
		}
	}
	while(!Operator.empty()){
		c=Operator.top();
		Operator.pop();
		if (c!=')') PostFix+=c;
	}
	cout<<PostFix;
}
