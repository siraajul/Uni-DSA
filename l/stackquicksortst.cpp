//#include <stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
#define MAXSIZE 3
#define max 20
using namespace std;

struct stack            /* Structure definition for stack */
{
    int stk[MAXSIZE];
    int top;
} s;
//int stack[20];
void push (int num);
int pop();
void quick(int a[], int beg, int end, int *loc);
void quicksort(int a[], int n);
main()
{
      int i,n,a[max];
      cout<<"Enter number of elements in array";
      cin>>n;
      if (n>max)
      {
            cout<<"Input size of array greater than declared size";
            exit(1);    
      }
      for(i=0;i<n;i++)
      {
                      cin>>a[i];
      }
      cout<<endl;
      quicksort(a,n);
      cout<<"sorted list of elements is";
      for (i=0;i<n;i++)
      {
          cout<<a[i]<<endl;
      }
      getch();
}
void quicksort(int a[], int n)
{
     int loc, beg, end;
    // createstack(&top);
     push(0);
     push(n-1);
     while(s.top!=-1)
     {
                         end=pop();
                         beg=pop();
                         quick(a,beg,end,&loc);
                         if(beg<loc-1)
                         {
                          push(beg);
                          push(loc-1);
            
                         }
 			               if(end>loc+1)
                         {
                          push(loc+1);
                          push(end);
                         }
                         
     }
     
 }
void quick(int a[], int beg, int end, int *loc)
{
     int left, right, temp;
     bool done;
     left=*loc=beg;
     right=end;
     done=false;
     while(!done)
     {
                 while((a[*loc]<a[right]) && (*loc!=right))
                 right--;
                 if(*loc==right)
                 done=true;
                 else
                 {
                     temp=a[*loc];
                     a[*loc]=a[right];
                     a[right]=temp;
                     *loc=right;
                 }
                 if(!done)
                 {
                          while((a[*loc]>a[left])&&(*loc!=left))
                          left++;
                          if(*loc==left)
                          done=true;
                          else
                          {
                              temp=a[*loc];
                              a[*loc]=a[left];
                              a[left]=temp;
                              *loc=left;
                          }
                 }
 }
}





/*Function to add an element to the stack*/
void push(int num) {

    if (s.top == MAXSIZE )
    {
        cout<<"Error: Overflow\n";
    }
    else
    {
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
}


/*Function to delete an element from the stack*/
int pop ()
{
    int num;
    if (s.top == - 1)
    {
        cout<<"Error: Stack Empty\n";
    }
    else
    {
        num = s.stk[s.top];
        s.top = s.top - 1;
    }
return num;}



/*Function to display the status of the stack*/
/*void display()
{
    int i;
    if (s.top == -1)
    {
        cout<<"Error: Stack Empty\n";
    }
    else
    {
        cout<<"\nItems in Stack\n";
        for (i = s.top; i >= 0; i--)
        {
            cout<<"\n" <<s.stk[i];
        }
    }
    cout<<"\n";
}


void peek(){

    int i;
    int num;
    int counter=0;
    if (s.top == -1)
    {
        cout<<"Error: Stack Empty\n";
    }
    else
    {
        cout<<"Top element is" <<s.top;
    }       
}
*/
