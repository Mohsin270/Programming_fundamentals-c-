/*    
      // reverse the string    BY METHOD "1"
#include <iostream>
using namespace std;
int main()
{
  string str;
  cout<<"Enter the string:";
  cin>> str;
 
  for(int i=str.length();i>=0;--i)
  {
  	cout<< str[i];
  }
*/

  // reverse the string    BY METHOD "2"

#include <iostream>
using namespace std;
int main()
{
	char str[12], temp;
    int i, j;
    cout << "Enter a string : ";
    gets(str);
    j = strlen(str) - 1;
    for (i = 0; i < j; i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout << "\nReverse string : " << str;
  return 0;
}