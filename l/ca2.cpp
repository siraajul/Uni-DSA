#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[10],n,i,j,first,temp;
	cout<<"Enter the array size ==>>";
	cin >>n;
	cout<<"\n\nenter the array element s==>>";
	for(int i=0; i<n;i++ )
	{
		cin>>arr[i];
	}
	for(i=n-1;i>0;i--)
	{
		first=0;
		{
			for(j=1;j<=1;j++)
			{
				if(arr[j]<arr[first])
				{
					first=j;
				}
			}
			temp=arr[first];
			arr[first]=arr[i];
			arr[i]=temp;
		}
		
	}
	cout<<"\n\n the shorted list is ==>>";
		for(i=n;i>=0; i--)
		{
			cout<<arr[i]<<"\n ";
		}
}
