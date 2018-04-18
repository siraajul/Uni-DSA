#include<iostream>
using namespace std;
void push1();
void push2();
void display1();
void display2();
int q[50],top1=-1,top2=-1,item1,item2,n;
main()
{
	int i,j;
	cout<<"enter the range"<<endl;
	cin>>n;
	for(i=0;i<n/2;i++)
	{
		cin>>item1;
		push1();
	}
	for(j=n/2;j<n;j++)
	{
		cin>>item2;
		push2();
	}
	display1();
	display2();
}
void push1()
{
	if(top1==-1)
	{
		top1=0;
	}
	else if(top1==50)
	{
		cout<<"overflow";
	}
	else
	{
		top1=top1+1;
	}	
		q[top1]=item1;
}
void push2()
{
	if(top2==-1)
	{
		top2=0;
	}
	else if(top2==50)
	{
		cout<<"overflow";
	}
	else
	{
		top2=top2+1;
	}	
		q[top2]=item2;
}
void display1()
{
	for(int i=top1 ;i>=n/2;i--)
	{
	cout<<q[i]<<"\t";
	}
}
void display2()
{
	for(int j=n/2;j>=top2;j--)
	{
	cout<<q[j]<<"\t";
	}
}
