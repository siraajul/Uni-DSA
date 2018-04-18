#include<iostream>
#include<conio.h>
using namespace std;
void towers(int,char,char,char);

void towers(int n,char frompeg,char topeg,char auxpeg)
	{ /* If only 1 disk, make the move and return */
	  if(n==1)
	    { cout<<"\nMove disk 1 from peg "<<frompeg<<"to"<<topeg;
	      return;
	    }
	  /* Move top n-1 disks from A to B, using C as auxiliary */
	  towers(n-1,frompeg,auxpeg,topeg);
	  /* Move remaining disks from A to C */
	  cout<<"\nMove disk "<<n<<"from peg"<<frompeg<<"to peg"<<topeg;
	  /* Move n-1 disks from B to C using A as auxiliary */
	  towers(n-1,auxpeg,topeg,frompeg);
	}
int main()
	{ int n;
	  cout<<"Enter the number of disks : ";
	  cin>>n;
	  cout<<"The Tower of Hanoi involves the moves :\n\n";
	  towers(n,'A','C','B');
	  getch();
	  return 0;
	}
