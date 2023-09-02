#include<iostream>
using namespace std;
struct students{
	string Name;
	string ID;
	char Gender;
	string DOB;
	float GPA;
	students *next;
};
int main(){
	students *head;
	head=new students;
	head->Name="Victor";
	head->ID="045";
	head->Gender='M';
	head->DOB="31082002";
	head->GPA=3.9;
	
	students *Second;
	Second=new students;
	Second->Name="Fahrul";
	Second->ID="045";
	Second->Gender='M';
	Second->DOB="31082002";
	Second->GPA=3.67;
	head->next = Second;
	
	students *Third;
	Third=new students;
	Third->Name="Anna";
	Third->ID="045";
	Third->Gender='F';
	Third->DOB="31082002";
	Third->GPA=3.4;
	Second->next = Third;
	
	students *S;
	S=new students;
	S->Name="Jeremy";
	S->ID="045";
	S->Gender='M';
	S->DOB="31082002";
	S->GPA=4;
	S->next = 0;
	
	students *cur = head, *prev = 0;
	while(cur){
       	if(cur->GPA < S->GPA) break;
       	prev = cur;
       	cur = cur->next;
	}
	if(!prev){
		S->next = head;
		head = S;
	}
	else if(!cur){
		prev->next = S;
		S->next = cur;
	}else{
		prev->next = S;
		S->next = cur;
	}
	cout<<"Result"<<endl;
	students *printCur=head;
	while(printCur){
		cout<<printCur->Name<<" "<<printCur->GPA<<endl;
		printCur=printCur->next;
	}
}
