//Owen Moloney
//March 20th, 2023
//This is a code for lab 6

#include<iostream>
using namespace std;

//Global Variables 
string phoneNumber;
int length;
char ch,x;

//Phone number function to be able to be recalled in the main() code
void phonenumber()
{
	int i;

	cout<< "Enter a phone number: ";
	cin>>phoneNumber;
	length = phoneNumber.length();
}

//Main code 
int main()
{//Start bracket 
//Variables 
int i;
bool keepRunning = true;
        //While function to use to repeat the fucntion
	while(keepRunning)
        {
	     phonenumber();
      	     cout<<endl;
	     cout<<"The length of the phone number is: "<<length;
	     cout<<endl;
	          for(i=0;i<length;i++)
                  {
    		     ch = phoneNumber.at(i);
 		  }
	     cout<<endl;
	     cout<<"The numerical version of what you entered is: ";

int j;
	             for(i=0;i<length;i++)
   		     {
ch = phoneNumber.at(i);
	//Using a switch function to tell the computer what to output for the characters that aren't numbers
			switch(ch)
      			{
        		  case'-':
			  cout<<"-";
      			}

			switch(ch)
      			{
        		  case'+':
			  cout<<"+";
      			}

			switch(ch)
       		 	{
			  case '0':
			  cout<<"0";
      			}

			switch(ch)
      			{
        		  case '1':
        		  cout<<"1";
      			}

      			switch(ch)
      			{
			  case '2':
			  cout<<"2";
      			}

			switch(ch)
      			{
			  case '3':
			  cout<<"3";
      			} 

			switch(ch)
      			{
			  case '4':
			  cout<<"4";
      		  	}

 			switch(ch)
      			{
			  case '5':
			  cout<<"5";
       			}

			switch(ch)
      			{
			  case '6':
			  cout<<"6";
      			}

			switch(ch)
    		  	{
			  case '7':
			  cout<<"7";
      			}

   			switch(ch)
     		 	{
			  case '8':
			  cout<<"8";
      			}

			switch(ch)
      			{
			  case '9':
			  cout<<"9";
      			}

      			switch(ch)
   			{
			  case 'A':
			  case 'B':
	  		  case 'C':
			  case 'a':
			  case 'b':
			  case 'c':
			  cout<<"2";
    			}	
			switch(ch)
  			{ 	
			  case 'D':
        		  case 'E':
        		  case 'F':
       			  case 'd':
        		  case 'e':
        		  case 'f':
       		  	  cout<<"3";
   			 }
			switch(ch)
   			{
			  case 'G':
        		  case 'H':
        		  case 'I':
        		  case 'g':
        		  case 'h':
        		  case 'i':
        		  cout<<"4";
   		  	}
			switch(ch)
  			{
			  case 'J':
        		  case 'K':
        		  case 'L':
        		  case 'j':
        		  case 'k':
        		  case 'l':
        		  cout<<"5";
    			}
			switch(ch)
   			{
			  case 'M':
        		  case 'N':
        		  case 'O':
        		  case 'm':
           		  case 'n':
        		  case 'o':
        		  cout<<"6";
    	 		}
			switch(ch)
   			{
			  case 'P':
			  case 'Q':
        		  case 'R':
        		  case 'S':
       		  	  case 'p':
        		  case 'q':
        		  case 'r':
			  case 's':
        		  cout<<"7";
    			}
			switch(ch)
   			{	
			  case 'T':
        		  case 'U':
        		  case 'V':
        		  case 't':
        		  case 'u':
        		  case 'v':
        		  cout<<"8";
    			}
			switch(ch)
   			{
			  case 'W':
        		  case 'X':
        		  case 'Y':
        		  case 'Z':
        		  case 'w':
        		  case 'x':
        		  case 'y':
        		  case 'z':
        		  cout<<"9";
   			}
}

//Question at the end of the code to see if they want to code to repeat or not 
		cout<<endl;
		cout<<"Do you want to do this again type y for yes n for no : ";
		cin >> x; 
		cout<<endl;

//If function for the while code 
		if(x!='y'&&x!='Y')
		{
		  keepRunning = false;
		  cout<<"Have a nice day!"<<endl;
		  return 0;
		}
}

return 0;
}//end bracket 


