#include <iostream>
#include<conio.h>
using namespace std;
float  add(int, int []);
float sub(int []);
float product (int[]);
float division(int []);
int mode(int []); 
void menu (int[]);

int main()
{
	int x;
	cout<<"Enter the no. of elements of array- ";
	cin >>x;
	int array[x];
	float ans;
	for (int i=0,j=1; i<x;i++,j++)
	{
		cout<<"Enter element "<<j<<" of array - "<<"\n";
		cin>>array[i];
    }
    menu (array);
    add (x,array);
    return 0;
}
 void menu (int array[] )
 {
 		char ch='y';
		do
		{
			int a;
			cout<<endl<<endl;
			cout<<"		#**************************#"<<endl;
			cout<<"		*        Menu              *"<<endl;
			cout<<"		*       ______             *"<<endl;
			cout<<"		* 1.For addition           *"<<endl;
			cout<<"		* 2.For subtraction        *"<<endl;
			cout<<"		* 3.For multiplication     *"<<endl;
			cout<<"		* 4.For division           *"<<endl;
			cout<<"		* 5.For the modulus        *"<<endl;
			cout<<"		#**************************#"<<endl;
			break;
		//	cout<<endl<<"Choose from menu - ";
		//	cin>>a;
			//cout<<endl;
			//	Switch(a,array);
		//	cout <<"If you want to continue enter y else enter any key - ";  
	 	//	cin>>ch;
	 	
			
		}while(ch=='y'||ch=='Y');
	
 }
  float add(int x, int array [])
   {
   	int sum,i;
   	for (i=0;i<=x;i++)
   	{ 
   	   sum =sum+array[x];
   	}
   }
