#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int info;
	node *left,*right;
};
struct node* root=NULL,*par,*loc;
void find(int);
void insertion();
void traversal(node* root);
void del();
int main()
{
int k;
while(1)
{
cout<<endl<<"----1----INSERTION";
cout<<endl<<"----2----TRAVERSAL";
cout<<endl<<"----3-----Delete";
cout<<endl<<"----any other key----EXIT";
cout<<endl<<endl;
cout<<endl<<"ENTER YOUR CHOICE : ";
cin>>k;
if(k==1)
insertion();

else if(k==2)
traversal(root);
else if(k==3)
del();
else
exit(0);
}
return 0;
}


void find(int data)
{
               par = NULL;
               loc = root;
               while(loc!=NULL && loc->info != data)
                {
                  par = loc;
                  if(data< loc->info)
                      loc = loc->left;
                  else
                      loc = loc->right; 
                }   
}

void insertion()
{
int data;     
node *p = new node;
cout<<"enter data part";
cin>>data;
p->info = data;
p->left = NULL;
p->right = NULL;
if(root==NULL)
{
  root = p;
}
else
{
 find(data);
 if(loc!=NULL)
    cout<<"\n Item is already present";
 else
 {
     if(data<par->info)
       par->left= p;
     else
       par->right = p;
 }
}

}

void traversal(node *root1)
{
if(root1==NULL)
{
    return;
}
else
{
traversal(root1->left);
cout<<"   "<<root1->info;
traversal(root1->right);
}

}
void del()
{int item;
 cout<<"\n enter the value that you want to delete";
 cin>>item;
 find(item);
 if(loc==NULL)
 {
  cout<<"\nItem is not present can't delete";
 }
 else
 { node * child;
   if(loc->left == NULL || loc->right==NULL)
   {
     if(loc->left==NULL && loc->right == NULL)
           child = NULL;
     else
     {
       if(loc->left!=NULL)
            child = loc->left;
       else
            child = loc->right;
     }
    if(par==NULL)
        root = child; 
    else
    { if(loc = par->left)
         par->left=child;
    else
         par->right=child;
    }
   }
        
 }
 }


