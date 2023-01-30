#include<iostream>
using namespace std;

int main()
{
	cout<<"enter the number : ";
	int n,r,sum=0; cin>> n;
	int t=n;
	while(n>0)
	{
		r=n%10;    
        sum=sum+(r*r*r);    
        n=n/10;    
		
	}
	if(t==sum)
	  cout<<"ARMSTRONG NUMBER";
	else
	 cout<<"not";
	
	
	
	
	
	
	
	
	
	return 0;
}