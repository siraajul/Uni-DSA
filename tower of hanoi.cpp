#include<iostream>
using namespace std;
void tower(int,char,char,char);
int count=0;
main()
{
	int n;
	cout<<"enter the no of discs\n";
	cin>>n;
	tower(n,'a','b','c');
	cout<<count;

}
void tower(int n,char src,char med,char des)
{
	count++;
	if(n==1)
	{
		cout<<src<<"->"<<des<<endl;
		return;
		
	}
	else
	{
		tower(n-1,src,des,med);
		cout<<src<<"->"<<des<<endl;
		tower(n-1,med,src,des);
		
	}	
}
