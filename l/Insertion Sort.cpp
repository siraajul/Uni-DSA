#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;


class memory{
 private:
     int a[10];
 public:
    void insert();
    void traverse();
    void sort();
};



int main(){
 memory m;
 int a,exit=1;


 while(exit){
  cout<<"1.Insert"<<endl;
  cout<<"2.Traverse"<<endl;
  cout<<"3.Insertion Sort"<<endl;
  cout<<"5.Exit"<<endl;
  a=getch()-48;
  switch(a){
   case 1:
    m.insert();
    break;
   case 2:
    m.traverse();
    break;
   case 3:
    cout<<"Calling Insertion_sort library files..."<<endl;
    m.sort();
    cout<<"sorted!"<<endl;
    break;
   case 4:
    exit=0;
    cout<<"Purging Resources!"<<endl;
    break;
   default:
     break;
   }
   getch();
   system("cls");
 }


 return 0;
}

void memory::insert(){
     for(int i=0;i<5;i++)
      {
         cout<<"enter the element "<<i+1<<":";
         cin>>a[i];
      }
}
void memory::traverse(){
   for(int i=0;i<5;i++)
      {
         cout<<"element "<<i+1<<":";
         cout<<a[i]<<endl;
      }
}

void memory::sort(){
  int temp,j;
  for(int i=1;i<5;i++){
    temp=a[i];
    j=i-1;
    while(temp <a[j] && j>=0)
    {
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=temp;
  }
}

