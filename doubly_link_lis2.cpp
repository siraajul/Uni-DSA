#include<iostream>
#include<conio.h>
using namespace std;

struct node
{
int info;
node *prev;
node *next;       
}*start=NULL;

void creation();
void insertion(node *);
int deletion(node *);
void display(node *);
void search(node *);

int main()
{
int choice;

if(start==NULL)
    {
creation();
    }    

while(1)
    {
cout<<"\n**** Enter choice: ****"  <<endl;
cout<<"1 : Insertion"  <<endl;
cout<<"2 : Deletion"  <<endl;
cout<<"3 : Display"  <<endl;
cout<<"4 : Search"  <<endl;
cout<<"5 : Exit"  <<endl;
cin>>choice;
switch(choice)
            {
case 1: 
insertion(start);
break;                     
case 2:
deletion(start);
break;                     
case 3:
display(start);
break;
case 4:
search(start);
break;
case 5:
exit(1);	
default:
cout<<"Wrong choice..." <<endl;          
            }
    }  

getch();
return 0;    
}

void creation()
{
start = new node;
cout<<"Enter data-value for 1st node: ";
cin>>start->info;
start->prev=NULL;
start->next = NULL;
}

void insertion(node *p)                    //Here "p" is traversing pointer
{
while(p->next!=NULL)
     {
          p = p->next;                    
     }
node *temp = new node;
cout<<"Enter data-value: ";
cin>> temp->info; 
temp->next = NULL;
temp->prev=p;
p->next = temp;                      //joining last node with new node
}

int deletion(node *ptr)                  //Here "ptr" is traversing pointer
{
node *ptrP = NULL;                          //pointer previous to ptr
if(ptr==NULL)
     {
cout<<"List is empty.."  <<endl;
return 0;
     }
int val;
cout<<"Enter data-value to delete: ";
cin>>val; 
while( (ptr!=NULL)&&(ptr->info!=val) )
     {
ptrP = ptr;
ptr = ptr->next;                    
     }

if(ptr==NULL)                         //element not found
     {     
cout<<"Value doesn't exist in list"  <<endl; 
return 0;
     }
else if(ptrP==NULL)             //element found at 1st location
     {
start = start->next;
delete ptr;     
     }          
else                                //element found at other locations	
     {
(ptrP->prev)->next = ptr->next;        //joining previous node with next node
delete ptr;   
     }
}

void display(node *p)                     //Here "p" is traversing pointer
{
cout<<"\n Elements in linked-list are: " <<endl;
while(p!=NULL)
     {
cout<<p->info  <<" --> ";
         p = p->next;
     }        
cout<<"NULL" <<endl;
}

void search(node *p)
{
	int k;
	cout<<"Enter the element to search"<<endl;
	cin>>k;
	while(p!=NULL)
	{
		if(p->info==k)
			{cout<<"Element found";break;}		
		p=p->next;
	}
	
}
