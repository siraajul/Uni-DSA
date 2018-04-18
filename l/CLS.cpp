#include<iostream>
using namespace std;
struct node
{
int info;
node *next;       
}*start=NULL;

void creation();
void insertAtLast(node *);
int deletion(node *);
void display(node *);

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
cout<<"1 : Insertion At Last"  <<endl;
cout<<"2 : Deletion"  <<endl;
cout<<"3 : Display"  <<endl;
cout<<"4 : Exit"  <<endl;
cin>>choice;
switch(choice)
            {
case 1: 
insertAtLast(start);
break;                     
case 2:
deletion(start);
break;                     
case 3:
display(start);
break;
case 4:
break;
default:
cout<<"Wrong choice..." <<endl;          
            }
    }  
return 0;    
}
void creation()
{
start = new node;
cout<<"Enter data-value for 1st node: ";
cin>>start->info;
start->next = start;
}

void insertAtLast(node *p)                    
{
while(p->next!=start)
     {
          p = p->next;                    
     }
node *temp = new node;
cout<<"Enter data-value: ";
cin>> temp->info; 
p->next = temp;                      //joining last node with new node
temp->next = start;                  //joining new node with 1st node
}

int deletion(node *ptr)                  //Here "ptr" is traversing pointer
{
node *loc = NULL;                    //location of element to delete
if(ptr==NULL)
     {
cout<<"List is empty.."  <<endl;
return 0;
     }

node *ptrP = start;                   
ptr = ptr->next;                    
int val;
cout<<"Enter data-value to delete: ";
cin>>val; 
while(ptr!=start)
     { 
if(ptr->info==val)
        {
loc = ptr;                  
break;
        }
else
        {
ptrP = ptr;
ptr = ptr->next;    
        }               
     }     
if(ptr->info==val)                 
     {
loc = ptr;                  
     }
if(loc==NULL)                     
     {     
cout<<"Value doesn't exist in list"  <<endl; 
return 0;
     }
else if(ptrP==ptr)            
     {
start = NULL;
delete ptr;     
     }          
else                                  
     {
ptrP->next = ptr->next;         
start = ptr->next;             
delete ptr;   
     }
}

void display(node *p)                   
{
cout<<"\n Elements in linked-list are: " <<endl;
if(p==NULL)                       
     {
cout<<"NULL";           
     }
else
      {
do
         {
cout<<p->info  <<" --> ";
             p = p->next;
}while(p!=start);    
cout<<p->info;             
     }
}

