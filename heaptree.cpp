#include<iostream>
using namespace std;
void display();
void insertion();
int heap[10],n=0;
int main()
{	int ch;
while(1)
{
	cout<<"\n1-Insertion\n2-Display\n";
	cin>>ch;
	if(ch==1)
	{
		insertion();
	}
	else
	display();
}
}
void insertion()
{
	int item,i,ptr,par,temp;
	
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
	void display()
	{
		for(int i=1;i<=n;i++)
		{
			cout<<heap[i]<<"  ";
		}
	}

