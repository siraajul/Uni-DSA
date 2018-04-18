#include<iostream>
using namespace std;
int top1=-1,top2=-1,q1[50],q2[50],item;
void push();
void pop();
void dis();
main()
{
	int n,ch;
	cout<<"enter the choice\n";
	cout<<"1.Push,2.Pop,3.Display";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Push elements\n";
			push();
			break;
		case 2:
			cout<<"Pop elements\n";
			pop();
			break;
		case 3:
			cout<<"display the result\n";
			dis();
			break;
	}
}
void push()
{
	if(top1==-1)
	{
		top=0;
	}
	else if(top1==50)
	{
		cout<<"overflow";
	}
	else
	{
		top=top+1;
		q[top]=item;
	}
}
void pop()
{
	
}
void dis()
{
	for(int i=top1;i>=0;i--)
	cout<<q[i]<<"\t";
}

