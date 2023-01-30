
//checking perfect numbers using function and print between 1 to 1000.
#include <iostream>
using namespace std;

int perfect(int p)
{
	int i,sum=0;
	for(i=1;i<p;i++)
	{
		if(p % i == 0)
		  sum += i ;
	}
	  return sum;
}

int main()
{
  int p,sum;
	cout<<"Enter the number to check it is perfect or not :";
	cin>> p;
	
	sum =  perfect(p);
	 if(sum == p)
	 cout<< p <<" is a perfect number.";
	 else
	  cout<< p <<" is not a perfect number.";
	 
	for(int i=0;i<=1000;i++)
	{
	
	 	sum = perfect(i);
	 if(i == sum)
	  cout<< "\n Perfect number between 0 to 1000 are :"<< i<<" " ;
    }
	
	
	
return 0;	
}