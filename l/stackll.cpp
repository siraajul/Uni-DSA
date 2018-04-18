/*write a menu driven program showing following options
a. push 
b. pop 
c. display
d.  quit*/
#include<iostream>
using namespace std;
#include<conio.h>
//#include<stdio.h>
struct node
{
	int data;
	struct node *link;
}*top=NULL;
void push(int m)
{
struct node *tmp;
tmp=new node;
tmp->data=m;
tmp->link=NULL;
tmp->link=top;
top=tmp;
}
void pop()
{
struct node *tmp;
if(top==NULL)
cout<<"\n\nSTACK IS EMPTY";
else
{
tmp=top;
cout<<"DELETED ELEMENT IS"<<tmp->data;
top=top->link;
delete tmp;
}
}
void disp()
{
struct node *ptr;
if(top==NULL)
cout<<"STACK IS EMPTY";
else
{
	cout<<"\nSTACK ELEMENTS ARE \n\n";
ptr=top;
while(ptr!=NULL)
{
cout<<ptr->data<<"->";
ptr=ptr->link;
}
}
}
main()
{
int i,n,ch;

do
{
cout<<"\nMENU\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT";
cout<<"\n\nENTER UR CHOICE";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\n\nENTER THE NUMBER";
cin>>n;
push(n);
break;
case 2:
pop();
break;
case 3:

disp();
break;
case 4:
exit(0);
}
}
while(ch!=4);
getch();
}
