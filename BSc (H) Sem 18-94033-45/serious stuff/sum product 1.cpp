#include <iostream>
#include <conio.h>
using namespace std;
int sum(int,int);
int product(int,int);
int main()
{
	int num2,num1,output,a;
	char ch;
	do{
		cout<<"Enter 2 numbers - ";
		cin>>num1>>num2;	
	    cout<<"choose from the following option\n";
		cout<<"enter 1  sum \n";
		cout <<"enter 2 for product";
		cin>>a;
		
		switch(a)  
			{
				case 1:
			    output = sum(num1,num2);
			    
			    break;
			    
			    case 2:
			    output=product(num1,num2);
			    break;
			    default:
			    cout<<"you entered wrong no.";
			    
	    	}
	    	cout<<output<<"\n";
	 cout <<"if you want to continue enter y else enter any key";  
	 cin>>ch; 	
      }
    while(ch=='y'||ch=='Y');   
//getch();
return 0;
	 
}

int  sum (int x, int y)
{
	int sum = x+y;
	return sum;

}

int product (int x,int y)
{
	int product = x*y;
	return product ;
}

