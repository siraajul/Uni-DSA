#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;
struct node
{ int info;
struct node *next;
}*start;

class single_llinke
{
	public:
		node *create_node(int);
		void insert_pos();
		void insert_begin();
		void delete_pos();
		void disp();
		single_llinke()
		{
			start=NULL;
		}
};
main()
{int choice,element, pos;
single_llinke s1;
cout<<"enter the choice"<<endl;
cin>>choice;
switch(choice)
{
	case 1:
		cout<<"Enter the elment";
		s1.insert_begin();
		cout<<"Element Inserted at begin";
		break;
	case 2:
		cout<<"Enter the element";
		s1.insert_pos();
		break;
	default:
			cout<<"worng option choosen";
	}
}
node *single_llinke::create_node(int value)
 {
 	struct node *temp,*s;
 	temp=new(struct node);
 	if(temp==NULL)
 	{
 		cout<<"Memory not allcoted";
 		return 0;
	 }
	 else
	 {
	 	temp->info=value;
	 	temp->next=NULL;
	 	return temp;
	 }
 }
 void single_llinke::insert_begin()
 {
 	int value;
	 cout<<"Enter the value";
	 cin>>value;
	 struct node *temp,*p;
	 temp=create_node(value);
	 if(start==NULL)
	 {
	 	start= temp;
	 	temp->next=NULL;
	 }
	 else
	 {
	 	p=start;
	 	start=temp;
	 	start->next=p;
	 	}
	 cout<<"Element is inserted:"<<endl;
	  }
void single_llinke::insert_pos()
{	int value,pos,counter=0;
	cout<<"Enter the value";
	cin>>value;
	struct node *temp,*ptr,*s;
	temp=create_node(value);
	cout<<"Eneter the postion";
	cin>>pos;
	int i;
	s=start;
	while(s!=NULL)
	{
		s=s->next;
		counter++;
	}
	if(pos==1)
	{
		if(start==NULL)
		{
			start=temp;
			start->next=NULL;	
		}
		else
		{
			ptr=start;
			start=temp;
			start->next=ptr;
		}}
	else if (pos > 1 && pos <= counter)
	{
		s=start;
	for(i=0;i<pos;i++)
	{ptr=s;
	s=start;
	}
	ptr->next=temp;
	temp->next=s;
	}
	else{
		cout<<"Postion is out of range";
	}
}
void single_llinke::delete_pos()
{
	int value,pos,counter=0;
	struct node *temp,*ptr,*s;
	cout<<"Enter the postion";
	cin>>pos;
	int i;
	s=start;
	if(pos==1)
	{
		if(start==NULL)
		{
			start=start->next;	
		}
		else
		{while(s!=NULL)
	{
		s=s->next;
		counter++;
	}
		}
	else if (pos > 1 && pos <= counter)
	{
		s=start;
	for(i=0;i<pos;i++)
	{ptr=s;
	s=s->next;
	}
	ptr->next=s->next;
	else{
		cout<<"Postion is out of range";
	}
	free(s);
}
}
void single_llinke::disp()
{
   struct node *temp;
   if(start=NULL)
   {
   	cout<<"List is emnpty";
   	return ;
   }
   temp = start;
    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->info<<"->";
        temp = temp->next;
    }
}

