   
  #include<iostream>
  using namespace std; 
   
// check given string is palidrome or not ?

 int main()
 {
 	string str1 , rev;
 	cout<<"Enter the string :";
 	cin>> str1;
 	// checking
 	int len= str1.length();
 	for(int i=len-1 ;i>=0;i-- )
 	{
 	   rev += str1[i];
    }
    // comparing
     if(rev == str1)
 	     cout<<"This string is palindrome "<<rev;
 	   else
 	     cout<<"This string is not palindrome "; 	
 	
 	
 }