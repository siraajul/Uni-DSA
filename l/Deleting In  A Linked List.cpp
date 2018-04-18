#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
struct node{
int data;
node* link;
}*head,*nptr,*ptr;
int d=0;
void insert(int);
void trans();
void del();
void scoopitem();
void scoopindex();

int main(){
 insert(5);
 trans();
 getch();
 system("cls");
 int i;
 cout<<"1.Search Item and Delete\n2.Search Index and Delete"<<endl;
 cin>>i;
 switch(i){
  case 1:
      scoopitem();
      break;
  case 2:
      scoopindex();
      break;
  default:
    cout<<"Better luck next time<<endl";

 }
 system("cls");
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
void scoopitem(){
  ptr=head;
  if(d==0){
  cout<<"enter the item :";
  cin>>d;
  }
  nptr=NULL;
  while(ptr!=NULL){
    if(d==ptr->data){
        del();
        break;
    }
    nptr=ptr;
    ptr=ptr->link;
  }
}

void scoopindex(){
  ptr=head;
  int index,i=1;
  cout<<"enter the index :";
  cin>>index;
  while(ptr!=NULL){
    if(i==index){
        del();
    }
    nptr=ptr;
    ptr=ptr->link;
    i++;
  }
}

void del(){
 if(nptr==NULL)
    head=ptr->link;
 else
  nptr->link=ptr->link;
  scoopitem();
}
