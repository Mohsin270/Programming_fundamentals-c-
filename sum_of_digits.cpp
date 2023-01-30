#include<iostream>
using namespace std;

int main()
{
	int r,number,sum =0;
   cout<<"Enter the number";
   cin>> number;	
	
    while(number>0)
    {
    	r = number%10;
    	sum += r;
    	number /= 10;
	}
	  cout<<"sum of digits are : "<<sum;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}