#include<iostream>
#include<conio.h>
using namespace std;
void bubble(int [],int);
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
           cout<<"applying bubble sort"<<endl;
           bubble(a,n);
           cout<<"sorting after bubble sort"<<endl;
           for(i=0;i<n;i++)
           {   
               
               cout<<a[i]<<"\t";
           } 
           getch();
           return 0;
}           
void bubble(int a[],int n)
{
     for(int pass=0;pass<n-1;pass++)
     {
       for(int i=0;i<n-pass-1;i++)
       {
               if(a[i]>a[i+1])
               {
                 int temp=a[i];
                 a[i]=a[i+1];
                 a[i+1]=temp;             
               }
        }    
     }  
 
 }          
