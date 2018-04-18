#include<iostream>
using namespace std;

struct linkedlist{
	int data;
	linkedlist *next;
};
typedef struct linkedlist node;
int main(){
	node *node1 = new node();
	if(node1==NULL){
		cout<<"No memory space"<<endl;
	}else{
		cout<<"Enter the data for insert"<<endl;
		cin>>node1->data;
		node1->next=NULL;
	}
	
}
