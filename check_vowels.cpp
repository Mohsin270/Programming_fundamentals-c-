
#include<iostream>
using namespace std;

int main()
{
	string letter;
  cout<<"enter the letter : ";
  cin>>letter;
	
  if(letter == "A" || letter == "E" ||letter == "O" ||letter == "I" || letter[0] == 'U' )	
	{
		cout<<" VOWELS ";
	}
  else if(letter[0] == 'a' || letter[0] == 'e' ||letter[0] == 'o' ||letter[0] == 'i' || letter[0] == 'u' )
	{
		cout<<" VOWELS";
	}
   else
   {
   cout<<" CONSONANTS";	
}
	
	
	
	
	return 0;
}