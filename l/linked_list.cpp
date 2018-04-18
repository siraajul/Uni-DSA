#include <iostream>
#include <conio.h>
using namespace std;
struct node
{
    int info;
    node *link;
};
int main()
{
    node *start=NULL;
    node *temp=NULL;
    int item;
    for(i=0;i<10;i++)
    {
        temp=new node;
        cout<<"enter the node";
        cin>>item;
        temp->info=item;
        temp->link=start;
        start=temp;
    }
    temp=start;
    for(i=0;i<10;i++)
    {
        cout<<" "<<temp->info;
        temp=temp->link;
    }
}
        
