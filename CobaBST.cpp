#include <stdio.h>
#include <iostream>>
using namespace std;
struct node {
	char data;
	node *kiri;
	node *kanan;
};
struct node *root{
	node->data = data;
	node->kiri = NULL;
	node->kanan = NULL;
};
preOrder (node *root){
	if (root != NULL){
		printf("%c",root->data)
		preOrder(root->kiri);
		preOrder(root->kanan);
	}
}
int main(){
	
}
