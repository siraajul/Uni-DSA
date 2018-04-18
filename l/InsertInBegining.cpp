#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
int main(){
	node *head = new node;
	head->data = 10;
	head->next = NULL;
	
	node *temp = new node;
	temp->data = 20;
	temp->next = head;
	head = temp;
	
	temp = new node;
	temp ->data = 30;
	temp ->next = head;
	head = temp;
	
    node *temp1 = head;
    while(temp1 != NULL){
    	cout<<temp1->data<<endl;
    	temp1 = temp1->next;
    }
}
