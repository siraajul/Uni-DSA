#include<iostream>
#include<conio.h>
using namespace std;
struct node{
int data;
node *link;
}*head,*nptr,*ptr;
int item,scop;
void insert(int);
void tran();
void scoop();
void del();
void ins();
void sort();
int main(){
  insert(10);
  tran();
  sort();
  cout<<"Sorting...."<<endl;
  tran();
  getch();
}
void insert(int x){
    int i=1;
    while(i<=x){
    ptr=new node;
    cout<<"enter item "<<i<<" :";
    cin>>item;
    ptr->data=item;
    if(head==NULL)
        head=ptr;
    else
        nptr->link=ptr;

        ptr->link=NULL;
        nptr=ptr;
    i++;
    }
}
void tran(){
    ptr=head;
    while(ptr!=NULL){
     cout<<"item :"<<ptr->data<<endl;
     ptr=ptr->link;
    }
}

void scoop(){
  ptr=head;
  if(scop==NULL){
  cout<<"enter the item :";
  cin>>scop;
  }
  nptr=NULL;
  while(ptr!=NULL){
    if(scop==ptr->data){
        ins();
        break;
    }
    nptr=ptr;
    ptr=ptr->link;
  }
}

void del(){
  if(nptr==NULL)
     head=ptr->link;
  else{
    ptr=ptr->link;
    nptr->link=ptr;
  }
  scoop();
}

void ins(){
 node*temp=ptr;
 ptr=new node;
 if(nptr==NULL){
    ptr->link=head;
    head=ptr;
 }
 else{
    ptr->link=temp->link;
    temp->link=ptr;
     }
  cout<<"enter the item :";
  cin>>item;
  ptr->data=item;
}

void sort(){
  int temp;
  for(ptr=head;ptr!=NULL;ptr=ptr->link){
    for(nptr=head;nptr!=NULL;nptr=nptr->link){
       if( ptr->data < nptr->data ){
          temp=ptr->data;
          ptr->data=nptr->data;
          nptr->data=temp;
       }
    }
  }
}


