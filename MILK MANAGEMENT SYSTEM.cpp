#include<iostream>
#include<fstream>
using namespace std;
struct Record
{
  int choice;
	char x[10];	
}r;

void addRecord();
void viewRecord();
void deleteRecord();
void searchRecord();
void mainmenu()
{
	
	system("cls");
	cout << "\n\t ///////////////////////////////////// \n";
	cout << "\n\t ********** Mohsin Developers ******* \n";
	cout << "\n\t ///////////////////////////////////// \n";
	
	cout << "\n\t ***********************************\n";
	cout << "\n\t       MILK MANAGEMENT SYSTEM       \n";
	cout << "\n\t ***********************************\n\n";
	cout << "1. Add Record\n";
	cout << "2. View Record\n";
	cout << "3. Delete Record\n";
	cout << "4. Search Record\n";
	cout << "5. Exit\n\n";
	
}

int main()
{
  Record r1;	
	do
	{	
	    
        mainmenu();
		cout <<"Enter your choice: ";
		cin >> r1.choice;
        if(cin.fail()) {
        cin.clear();
        cin.ignore(1,r1.choice);
        }
        
		switch (r1.choice)
		{
		case 1:
		do
		{
			system("CLS");
		cout << "\n\t ************* ADD RECORD **************\n";
			addRecord();
		cout << "Do you want to add more record?(y/n) : ";
			cin >> r1.x;
	    }while (r1.x == "y");
			break;
		case 2:
			system("CLS");
			viewRecord();
			cout << " Go To Main Menu (y) : ";
			cin >> r1.x;
			if (r1.x != "y")
			{
				r1.choice == 5;
			}
			break;
		case 3:
			system("CLS");
			deleteRecord();
			cout << " Go To Main Menu (y) : ";
			cin >> r1.x;
			if (r1.x != "y")
			{
				r1.choice == 5;
			}
			break;
		case 4:
			system("CLS");
		    searchRecord();
		    cout << " Go To Main Menu (y) : ";
			cin >> r1.x;
			if (r1.x != "y")
			{
				r1.choice == 5;
			}
			break;
		case 5:	
		    cout<<"\n\n\t Thanks for Visiting!!! ";
		    exit(0);
		default:
		
			break;
		}
	}while(r1.choice!=5);

}

void addRecord()
{
	string buyer , sellor;
	string date,option , milk,x;
	int quantity , amount,price_buffalo=150 ,price_cow ;
	ofstream outfile;
	cout << "Enter Buyer Name: ";
	cin >> buyer;
	
	cout <<"\nBUFFALO OR COW  :";
    cin >> x ;
    if(x=="cow")
	  {	
	  cout <<"\nEnter price :";
	  cin >> price_cow ;
	  cout <<"\nEnter Quantity :";
	  cin >> quantity;
	  amount = quantity * price_cow ;
	  cout <<"\nAmount :"<< amount;
      }
    else
      {	
	  cout <<"\nEnter price :";
	  cin >> price_buffalo ;
	  cout <<"\nEnter Quantity :";
	  cin >> quantity;
	  amount = quantity * price_buffalo ;
	  cout <<"\nAmount :"<< amount;
      }
   
      
	cout << "\n\nEnter Date: ";
	cin >> date ;
    
	outfile.open("record.txt", ios::app);
	outfile << buyer << " " << quantity << " " << amount << " " << date << endl;
	outfile.close();

	cout << "\nRecord Added Successfully\n";
}

void viewRecord()
{
	string buyer, quantity,date;
	int amount;
	ifstream infile;

	infile.open("record.txt");
	if (!infile.is_open())
	{
		cout << "\nFile does not exist\n";
		return;
	}

	cout << "\n\t ***************** RECORD ****************** \n";
	cout << "\t Buyer \t quantity \t Amount \t date \n ";
 
	while (infile >> buyer >> quantity >> amount >> date )
	{
		cout <<"\t " << buyer << " \t " <<  quantity << " \t\t " << amount << " \t\t " << date << endl; 
	}
	infile.close();
}

void deleteRecord()
{
	string buyer,entry;
	ofstream temp;
	ifstream infile;
    
    cout<<" 1 entry or All data \n";
    cin>> entry;
  if(entry == "all")
  {
    	remove("record.txt");
    	cout << "\n All Record Deleted .. \n";
  }
  else
  {
	cout << "Enter Buyer Name: ";
	cin >> buyer;

	infile.open("record.txt");
	temp.open("temp.txt");
	if (!infile.is_open())
	{
		cout << "\nFile does not exist\n";
	}

	string buyer2, quantity,date;
	int amount;
	while (infile >> buyer2 >>  quantity >> amount >> date)
	{
		if (buyer2 != buyer)
			temp << buyer2 << " " <<  quantity << " " << amount << " " << date << endl;
	}
               
    infile >> buyer2 >>  quantity >> amount >> date ; 
		cout << buyer << "\t" <<  quantity << "\t" << amount << "\t" << date << endl;
		cout<<"\n Are you sure to delete this record (y/n) \n";
		char x;
		cin>> x;
	   if(x == 'y' )
	   {
         
           infile.close();
	       temp.close();
    
	         remove("record.txt");
	       rename("temp.txt", "record.txt");
   
	       cout << "\n Record Deleted Successfully.. \n";  
          
       }
		else {
	        cout << " Go To Main Menu (y) : ";
			cin >> x;
			if (x != 'y')
	  		  r.choice == 5;
	   }
       
	}
//    else
//        cout<< "\n Invalid input OR not exist \n";
  
}

void searchRecord()
{
	string buyer, quantity,date,date2;
	int amount,f=0;
	ifstream infile;
	
	cout<<"Enter date :";
	cin>>date2;

	infile.open("record.txt");
	if (!infile.is_open())
	{
		cout << "\nFile does not exist\n";
		return;
	}
    else
    {
	 while ( infile >> buyer >>  quantity >> amount >> date )
      if (date2 == date)
      {
       f = 1;
      }
      
	if(f == 1)
	{
	   cout << "\n\t ***************** RECORD ****************** \n";
	   cout << "\t Buyer \t quantity \t Amount \t date \n ";
	   cout <<"\t " << buyer << " \t " <<  quantity << " \t\t " << amount << " \t\t " << date << endl;  
    }
    else
	   cout<<" not exist "<<endl;
	   
    }
    
	infile.close();
	               
}
	               


