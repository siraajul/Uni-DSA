#include<iostream>
#include<conio.h>
using namespace std;
void insertion(int [],int);
int main()
{
          int a[20],i,n,item;
          cout<<"\n enter number of elements in array";
          cin>>n;
          for(i=0;i<n;i++)
           {   
               cout<<"enter number::"<<i+1<<" ";
               cin>>a[i];
           }
           cout<<"iteams in the array are"<<endl;
           for(i=0;i<n;i++)
           {   
               
               cout<<a[i]<<"\t";
           }
           cout<<"applying insertion sort"<<endl;
           insertion(a,n);
           cout<<"sorting after insertion sort"<<endl;
           for(i=0;i<n;i++)
           {   
               
               cout<<a[i]<<"\t";
           } 
           getch();
           return 0;
}      
     
void insertion(int a[],int n)
{   int i,key,j;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while((key<a[j])&&(j>=0))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
        
    }
  }          
