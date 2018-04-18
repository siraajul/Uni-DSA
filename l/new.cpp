#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
int main(){
	node *A;
	A=NULL;
	node *temp = new node();
	temp->data=2;
	temp->next=NULL;
	A=temp;
	temp = new node();
	temp->data=10;
	temp->next=NULL;
	
	node *temp1 = A;
	while(temp1->next!=NULL){
		temp1=temp1->next;
	
	}
	temp1->next=temp;
	cout<<temp->data;
	cout<<A->data;
	
	
	
}
