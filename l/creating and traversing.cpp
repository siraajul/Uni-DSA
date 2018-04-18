#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};


 
int main(){
     node *head,*link; 
     head = new node;   
     link = head;
     link->data = 10;
     link->next = new node;  
     link = link->next;
     link->data = 20;
     link->next = NULL;
        
     link = head;
	 while(link!=NULL){
	 	cout<<link->data<<endl;
	 	link = link->next;
	 }	
}

