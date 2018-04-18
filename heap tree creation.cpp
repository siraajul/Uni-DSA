#include<iostream>
using namespace std;
void display(int,int[]);
int main()
{
	int heap[10],n=0,item,i,ptr,par,temp;
	while(1)
	{
	cout<<"enter the item: ";
	cin>>item;
	n=n+1;
	heap[n]=item;
	ptr=n;
	par=ptr/2;
	while(par>=1&& heap[ptr]>heap[par])
	{
		temp=heap[ptr];
		heap[ptr]=heap[par];
		heap[par]=temp;
		ptr=par;
		par=par/2;
	}
	}
	display(n,heap);
}
	void display(int n,int heap[])
	{
		for(int i=0;i<n;i++)
		{
			cout<<heap[i];
		}
	}

