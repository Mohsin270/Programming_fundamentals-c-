#include <iostream>
using namespace std;
 // fibonnanci series by using recursion
 int fibo(int x)
 {
   if(x==0||x==1)
 	return x;
   else
    return fibo(x-1) + fibo(x-2);	
 }
 
int main()
{
	int f, i=0;
	cout<<" Enter the nth series : ";
	cin>> f;

	while(i<f)
	{
		int z = fibo(i);
		if(z>=f)
	  break;
	  cout<< " " << z;
	  i++;
	  
	}
	
    return 0;
}




