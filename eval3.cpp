#include<iostream>
using namespace std;
int find(int [],int,int);
int quick(int [],int,int);
int main()
{
	int a[50],n,i,loc;
	cout<<"enter length of array"<<endl;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quick(a,0,n-1);
	for(i=n-1;i>=0;i--)
	{
		cout<<a[i]<<"\t";
	}
}
int quick(int a[],int beg,int end)
{
	if(beg<end)
	{
		int k=find(a,beg,end);
		quick(a,beg,k-1);
		quick(a,k+1,end);	
	}
}
int find(int a[],int b,int e)
{
	int loc=b,beg=b,end=e,temp;
	while(a[loc]<=a[end] && loc!=end)
	{
		end=end-1;
	}
	if(loc==end)
	return loc;
	if(a[loc]>a[end])
	{
		temp=a[loc];
		a[loc]=a[end];
		a[end]=temp;
		loc=end;
	}
	while(a[loc]>=a[beg] && loc!=beg)
	{
		beg=beg+1;
	}
	if(loc==beg)
	return loc;
	if(a[loc]<a[beg])
	{
		temp=a[loc];
		a[loc]=a[beg];
		a[beg]=temp;
		loc=beg;
	}
}
