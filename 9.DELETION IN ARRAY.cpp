#include<stdio.h>
#include<conio.h>
main()
{
      int a[10];
      int n,loc;
      
       printf("enter the size of an array:-");
       scanf("%d",&n);
       
       printf("\nenter the elements:-");
       for(int i=0;i<n;i++)
       {
           scanf("%d",&a[i]);    
       }  
       
       printf("\nenter the postion of the element you want to delete:-");
       scanf("%d",&loc);
    
          for(int i=loc;i<n-1;i++)
          {
                  a[i]=a[i+1];
          }
          

        printf("\narray after deleting element is:-");
       for(int i=0;i<n-1;i++)
       {
           printf("%d\n",a[i]);    
       }  
       
       
       
       getch();
}
