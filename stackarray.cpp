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
struct node
{
	int top;
	int stack[MAXSIZE];
}s;
char ch='\0';
void push()
{
	do{
	
	int item;
if(s.top==MAXSIZE)
{
cout<<"\nStack is Full!-overflow";
break;
}
else
{
	s.top=s.top+1;
	cout<<"\nenter element to be pushed\n";
	cin>>item;
	s.stack[s.top]=item;
	}
cout<<"\n Do you want to push more elements[y/n]\n";
 cin>>ch;
}while(ch=='y'||ch=='Y');
}
void pop()
{
do
{

if(s.top==0)
{

cout<<"\n\nSTACK IS EMPTY";
break;
}
else
{
cout<<"DELETED ELEMENT IS"<<s.stack[s.top];
s.top=s.top-1;
}
cout<<"\n Do you want to pop out more elements[y/n]\n";
 
 ch=getch();
}while(ch=='y'||ch=='Y');


}
void disp()
{
if(s.top==0)
cout<<"STACK IS EMPTY";
else
{
	cout<<"\nSTACK ELEMENTS ARE \n\n";
for(int i=s.top;i>0;i--)
cout<<s.stack[i]<<"-->";
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
