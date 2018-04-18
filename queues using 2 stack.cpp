// Wap to implement stack using array and perform push and pop operation on it by incrementing their fn seperately
#include<iostream>
using namespace std;
void push();
void pop();
void display();
int n=0,n1=0;
int s[10],q[10];
int main()
{
	int ch;
	menu:
		
		cout<<"\nEnter 1 for push and 2 for pop 3 for viewing the stack 4 for exit";
		cout<<"\nEnter your choice:"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				push();
				goto menu;
			case 2:
				pop();
				goto menu;
			case 3:
				display();
				goto menu;
			case 4:
				cout<<"Exit";
				break;
			default:
				cout<<"Wrong entry";
				goto menu;
		}
		
}
void push()
{
	int no;
	cout<<"\nEnter the element to be loaded on stack :";
	cin>>no;
	cout<<endl;
	s[n]=no;
	n=n+1;
}
void display()
{
	for(int i=0;i<n;i++)
	{
		cout<<s[i]<<"\t";
	}
	cout<<endl;
	for(int i=0;i<n1;i++)
	{
		cout<<q[i]<<"\t";
	}
	cout<<endl;
}
void pop()
{
	int k;
	cout<<"\nEnter the no of element to be popped out";
	cin>>k;
	cout<<endl;
	for(int j=1;j<=k;j++)
	{
		cout<<s[n-j]<<"\t";
		q[n1]=s[n-j];
		n1=n1+1;
	}
	n=n-k;
}
