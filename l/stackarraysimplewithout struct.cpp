/*write a menu driven program showing following options(using array)
a. push 
b. pop 
c. display
d.  quit*/
#include<iostream>
using namespace std;
#include<conio.h>
//#include<stdio.h>
#define MAXSIZE 30

	int top=-1;
	int stack[MAXSIZE];

char ch='\0';
void push()
{
	do{
	
	int item;
if(top==MAXSIZE-1)
{
cout<<"\nStack is Full!-overflow";
break;
}
else
{
	top=top+1;
	cout<<"\nenter element to be pushed\n";
	cin>>item;
	stack[top]=item;
	}
cout<<"\n Do you want to push more elements[y/n]\n";
 cin>>ch;
}while(ch=='y'||ch=='Y');
}
void pop()
{
do
{

if(top==-1)
{

cout<<"\n\nSTACK IS EMPTY";
break;
}
else
{
cout<<"DELETED ELEMENT IS"<<stack[top];
top=top-1;
}
cout<<"\n Do you want to pop out more elements[y/n]\n";
 
 ch=getch();
}while(ch=='y'||ch=='Y');


}
void disp()
{
if(top==-1)
cout<<"STACK IS EMPTY";
else
{
	cout<<"\nSTACK ELEMENTS ARE \n\n";
for(int i=top;i>=0;i--)
cout<<stack[i]<<"-->";
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
//cout<<"\n\nENTER THE NUMBER";
//cin>>n;
push();
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
