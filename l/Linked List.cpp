#include<iostream>
#include<conio.h>
using namespace std;
struct node{
int data;
node* link;
}*head,*nptr,*ptr;

void insert(int);
void trans();

int main(){
 insert(5);
 trans();
 getch();
}

void insert(int x){
  int item,i=1;
  while(i<=x){
    ptr=new node;
    cout<<"enter the item :";
    cin>>item;
    ptr->data=item;
    if(head==NULL){
        head=ptr;
        nptr=ptr;
    }
    else{
        nptr->link=ptr;
        nptr=ptr;
    }
    i++;
  }
}

void trans(){
 ptr=head;
 while(ptr!=NULL){
    cout<<"item :"<<ptr->data<<endl;
    ptr=ptr->link;
 }
}
