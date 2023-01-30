#include<iostream>
using namespace std;

int main()
{
	int n,r;
	cout<<"Enter the value of a : ";
	cin>> n ;
	cout<<"Enter the value of b : ";
	cin>> r ;

    n=n+r;
    r=n-r;
    n=n-r;

    cout<<"The value of \"a\" after swap is :" <<n<<endl;
    cout<<"The value of \"b\" after swap is :" <<r;






return 0;
}