#include<iostream>
#include<conio.h>
using namespace std;
main()
{
      int a[10];
      int n,item,loc;
      
       cout<<"enter the size of an array ";
       cin>>n;
        cout<<"enter the elements";
       for(int i=0;i<n;i++)
       {
           cin>>a[i];    
       }  
       
        cout<<"enter the element you want to insert";
       cin>>item;
       
    cout<<"enter the location";
       cin>>loc;
       
       for(int i=n-1;i>=loc;i--)
       {
               a[i+1]=a[i];
       } 
       a[loc-1]=item;
       
       cout<<"array after inserting elements is";
       for(int i=0;i<n+1;i++)
       {
           cout<<a[i];
       }  
       getch(); 
}
