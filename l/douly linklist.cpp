#include<iostream>
#include<stdio.h>

using namespace std;

struct node {
	int info;
	node *prev;
	node *link;
}*start=NULL;

void creation();
void insertion(node *p);
void deletion(node *p);
void display(node *p);

int main()
{
	int a;
	
	if(start==NULL)
	{
		creation();	
	}	
	
	cout<<"\n\nEnter 1.Insertion \n2.Deletion \n3.Display \n\n==>>";
	cin>>a;
	
	switch(a)
	{
		case 1: insertion(start);
		break;
		case 2: deletion(start);
		break;
		case 3: display(start);
		break;
	}

}

void creation()
{
	start=new node;
	cout<<"Enter info==>>";
	cin>>start->info;
	start->prev=NULL;
	start->link=NULL;
}

void insertion(node *p)
{
	while(p->link!=NULL)
	{
		p=p->link;
	}
	node *temp=new node;
	cout<<"\n\nEnter data value==>>";
	cin>>temp->info;
	temp->link=NULL;
	temp->prev=p;
	p->link=temp;
}

void deletion(node *p)
{
	while(p->link!=NULL)
	 {
		p=p->link;
     }
    (p->prev)->link=p->link;
    
}

void display(node *p)
{
	while(p->link!=NULL)
	{
		p=p->link;
	}
	cout<<p->info;
	p->link;
	cout<<"\n\nNULL";
}
