#include<iostream>
using namespace std;
void push();
void display();
int top=-1,q[50],item;
int main()
{
	int n,i;
	cout<<"enter range"<<endl;
	cin>>n;
	cout<<"enter value"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>item;
		push();
	}
	display();
}
void push()
{
	if(top==-1)
	{
		top=0;
	}
	else if(top==50)
	{
		cout<<"overflow";
	}
	else
	{
		top=top+1;
	}	
		q[top]=item;
	
}
void display()
{
	for(int i=top;i>=0;i--)
	cout<<q[i]<<"\t";
}
