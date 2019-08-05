#include <iostream>
#include <conio.h>
using namespace std;

void HomePage(float []);

void menu(float []);
void Switch(char, float []);
void ca();

float add( float [] );
float sub( float [] );
float multiply( float [] );
float div( float [] );
int mod( float [] );

int limit;
float result;
string choice;

int main()
{
	ca();
	return 0;
}

void HomePage(float array[])
{
	
	while (choice!="Exit" && choice!="exit"  && choice!= "EXIT"  && choice!="2")
	{
		cout<<"		*************************************************"<<endl;
		cout<<"		*			WELCOME			*"<<endl;
		cout<<"		*			-------			*"<<endl;
		cout<<"		*			1.Menu			*"<<endl;
		cout<<"		*			2.Exit			*"<<endl;
		cout<<"		*						*"<<endl;
		cout<<"		*************************************************"<<endl;
		cout<<"Enter your choice - ";
		cin>>choice;
		cout<<endl<<endl<<endl;
	
			
		if (choice=="Exit" || choice=="exit"  || choice== "EXIT"  || choice=="2")
		{
			break;
		}
		
		else if( choice=="Menu" || choice=="menu" || choice == "MENU" || choice == "1")
			{
			menu(array);
			break;
			}
		else
			cout<<"\nWrong choice entered\n\n\n\n\n";
	}
}

void menu(float array[])
{
	char ch,en='y';
			while(en=='y' || en=='Y')
			{
			cout<<"		#**************************#"<<endl;
			cout<<"		*        Menu              *"<<endl;
			cout<<"		*       ______             *"<<endl;
			cout<<"		* A.Addition               *"<<endl;
			cout<<"		* B.Subtraction            *"<<endl;
			cout<<"		* C.Multiplication         *"<<endl;
			cout<<"		* D.Division               *"<<endl;
			cout<<"		* E.Modulus                *"<<endl;
			cout<<"		* F.Go Back                *"<<endl;
			cout<<"		#**************************#"<<endl;
			
			cout<<" CAUTION - Precision will be lost in case of modulo function.\n";
			cout<<"           (Decimals will be converted to integers)\n\n\n              ";
			cout<<" Select an operation - ";
			cin>>ch;
			cout<<endl<<endl;
		Switch(ch, array);
			cout<<"    Do you want to continue\n    (Reply y or Y to continue) - ";
			cin>>en;
			}
}

void Switch(char ch, float array[])
{
	switch(ch)
			{
				case 'a':
				case 'A':
				case '1': result= add(array);
				cout<<"The sum of the numbers is "<<result<<endl<<endl; 
				break;
				
				case 'b':
				case 'B':
				case '2':result=sub(array);
				cout<<"The difference of the numbers is "<<result<<endl<<endl; 
				break;	
				
				case 'c':
				case 'C':
				case '3':result= multiply(array);
				cout<<"The product of the numbers is "<<result<<endl<<endl;  
				break;
				
				case 'd':
				case 'D':
				case '4':result=div(array);
				cout<<"The result is "<<result<<endl<<endl;
				break;
				
				case 'e':
				case 'E':
				case '5':result=mod(array);
				cout<<"The result is "<<result<<endl<<endl; 
				break;	
				
				case 'f':
				case 'F':
				case '6': HomePage(array);
				choice="exit";
				break;
				
				default:
				cout<<"You have entered wrong input\n\n\n\n";
				menu(array);			
			}	
}

float add( float array[] )
{
	float sum=0;
	for(int i=0; i<limit; i++ )
		sum = sum + array[i];
	return sum;
}

float multiply( float array[] )
{
		float pro=1;
	for(int i=0; i<limit; i++ )
		pro = pro * array[i];
	return pro;
}

float sub( float array[] )
{
	int n1,n2;
	cout<<"Select element 1 - ";
	cin>>n1;
	cout<<"Select element 2 - ";
	cin>>n2;
	n1--;
	n2--;
	result = array[n1]-array[n2];
	return result;
}
float div( float array[] )
{
	int n1,n2;
	cout<<"Select element 1 - ";
	cin>>n1;
	cout<<"Select element 2 - ";
	cin>>n2;
	n1--;
	n2--;
	result = array[n1]/array[n2];
	return result;
}
int mod( float array[] )
{
	int n1,n2;
	cout<<"Select element 1 - ";
	cin>>n1;
	cout<<"Select element 2 - ";
	cin>>n2;
	n1--;
	n2--;
	int num1= static_cast<int>(array[n1]);
	int num2= array[n2];
	cout<<num1<<"Is num1 and \n"<<endl<<num2<<" is num2";
	result = num1%num2;
	cout<<endl<<result<<endl;
	return result;
}
void ca()
{
	cout<<"On how many numbers would you like to perform the calculations - ";
	cin>>limit;
	cout<<endl;
	float array[ limit ];
	for (int i=0,j=1; i<limit;i++,j++)
	{
		cout<<"Enter number "<<j <<" - "<<"\n";
		cin>>array[i];
	}
	HomePage(array);
		
}
