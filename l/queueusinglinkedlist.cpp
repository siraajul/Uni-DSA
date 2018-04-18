#include<iostream>
using namespace std; 
 #include<conio.h>
 #include<stdlib.h>
 struct Node
 {
        int Data;
        struct Node* next;
 }*rear=NULL, *front=NULL;

void dequeueop()
{
       struct Node *temp=front;
     if(front==NULL)
     {
     	cout<<"Empty queue\n";
     	return;
	 }
	 if(front==rear)
      {
             front=rear=NULL;
      }
      else
      
	  front=front->next;
}

void enqueue(int value)
{
     struct Node *temp;
     temp=new Node;
     temp->Data=value;
     temp->next=NULL;
     if (front == NULL && rear==NULL)
     {
           front=temp;
           front->next=NULL;
           rear=front;
     }
     else
     {
           rear->next=temp;
           rear=temp;
           
     }
}
void display()
{
     struct Node *temp=front;
          if(front==NULL)
     {
	 
     cout<<"\nQueue is Empty";
     return;
 }
           printf("\nElements are :  ");
           while(temp!=NULL)
           {
                cout<<temp->Data<<"-->";
                temp=temp->next;
           }
     
      

}

int main()
{
     int i=0;
     
     cout<<" \n1.  insert \n2. delete \n3. Display Data of Queue\n4. Exit\n";
     while(1)
     {
          printf(" \nChoose Option: ");
          scanf("%d",&i);
          switch(i)
          {
                case 1:
                {
                     int value;
                     printf("\nEnter a value: ");
                     cin>>value;
                     enqueue(value); 
                     display();
                     break;
                }
                case 2:
                {
                     dequeueop();
                     display();
                     break;
                }
                case 3:
                {
                     display();
                     break;
                }
                case 4:
                {
                     exit(0);
                }
                default:
                {
                     printf("\nwrong choice for operation");
                }
          }
     }
}
