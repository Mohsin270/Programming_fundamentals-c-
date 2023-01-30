#include<iostream>
using namespace std;
int prime(int n)
{
	if(n <= 1)
	 return false;
	for(int i=2;i<n;i++)
   {
   	if(n%i == 0)
   	  return false;
   	  
   	 return true; 
   }
}
int main()
{
	int number;
   cout<<"enter the number";
   cin>> number;
   
	if(prime(number))
	  cout<< number <<" is a prime number";
	 else
	 cout<< number <<" is not a prime number"; 
	
  return 0;
}