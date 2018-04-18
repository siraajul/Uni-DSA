#include<iostream>
using namespace std;

void search(int a[],int n,int k);
int main()
{
	int *a,n,k;
	cout<<"Enter the Size of the array ";
	cin>>n;
	a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"Enter the element to search ";
	cin>>k;
	search(a,n,k);
	
}

void search(int a[],int n,int k)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==k)
		cout<<"Element found at "<<i+1;
		
		
	}
	
}

