#include<iostream>
#include<conio.h>
using namespace std;
void selection(int [],int);
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
           cout<<"applying selction sort"<<endl;
           selection(a,n);
           cout<<"sorting after selection sort"<<endl;
           for(i=0;i<n;i++)
           {   
               
               cout<<a[i]<<"\t";
           } 
           getch();
           return 0;
}           
void selection(int a[],int n)
{    int i,loc,j,min,temp;
     for(i=0;i<n-1;i++)
     {
      min =a[i];
      loc=i;
      for(j=i+1;j<n;j++)
      { if(min >a[j])
          {
            min=a[j];   
            loc=j;   
          } 
       }
       temp=a[i];                        
       a[i]=a[loc];
       a[loc]=temp;    
 }  
 
}                                 
