#include<iostream>
using namespace std;

void deletion(int a[],int pos,int n);
void display(int a[],int n);
int main()
{
	int *a,n;
	cout<<"Enter the Size of the array ";
	cin>>n;
	a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int pos;
	cout<<"Enter the position to delete";
	cin>>pos;
	pos--;
	deletion(a,pos,n);
	display(a,n);
}

void deletion(int a[],int pos,int n)
{
	for(int i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	
}

void display(int a[],int n)
{
	for(int j=0;j<n-1;j++)
	{
		cout<<a[j];
	}
}
