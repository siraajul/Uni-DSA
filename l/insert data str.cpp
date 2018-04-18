#include<iostream>
using namespace std;
void insert(int a[],int pos,int);
void display(int a[],int n);

int main()
{

int *a,n;
cout<<"enter the size of array";
cin>>n;

a=new int[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
int pos,k;
cout<<"enter the position to add";
cin>>pos;
cout<<"enter the elemen to add";
cin>>k;
insert(a,pos,n);
a[pos]=k;
display(a,n);
}
void insert(int a[],int pos, int n)
{
	for(int i=0;i<pos;i--)
	{
		a[i]=a[i+1];
	}
}
void display(int a[], int n)
{
	for(int j=0;j<n+1;j++)
	{
		cout<<a[j];
	}
}
