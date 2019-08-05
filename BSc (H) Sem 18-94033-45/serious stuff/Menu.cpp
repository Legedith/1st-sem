#include<iostream>
#include <conio.h>
using namespace std;
void even(int []);
void odd(int []);
float sum_avg(int []);
void min(int []);
void max(int []);
void duplicate(int []);
void print_reverse(int []);
void menu(int []);
void Switch(char a, int []);
float ans;

int main()
{
	int x;
	cout<<"Enter the no. of elements of the array -";
	cin>>x;
	int array[x];
	float ans;
	for (int i=0,j=1; i<x;i++,j++)
	{
		cout<<"Enter element "<<j<<" of array - "<<"\n";
		cin>>array[i];
		
	}
	menu(array);
	
	return 0;
}
 
void even(int array[])
{
	int a;
	for(int i=0,a=0;i<10;i++)
	{
		if (array[i]%2==0)
		{
			cout<<array[i]<<endl;
		a=1;
		}
	}
		if (a=0)
		cout<<"No even no."<<endl;
	
}

void odd(int array[])
{
	for(int i=0;i<10;i++)
	{
		if (array[i]%2!=0)
		cout<<array[i]<<endl;
	}
}

float sum_avg(int array[])
{
	float sum=0;
	float avg;
	for(int i=0;i<10;i++)
	{
		sum+=array[i];
	}
	cout<<"The sum of numbers is "<<sum<<endl;
	avg=sum/10.0;
	
	return avg;
}

void min(int array[])
{
	int min =array[0];
	for(int i=1;i<10;i++)
	{
		if(min>array[i])
		min=array[i];
	}
	cout<<"the minimum is "<<min<<endl;
}

void max(int array[])
{
	int max =array[0];
	for(int i=1;i<10;i++)
	{
		if(max<array[i])
		max=array[i];
	}
	cout<<"The maximum no. is "<<max<<endl;
}

void print_reverse(int array[])
{
	for(int i=9;i>=0;i--)
	cout<<array[i]<<endl;
	
}

void duplicate(int array[])
{
	int x[10],j,k=0,flag=0;
	x[k]=array[0];
	for(int i=0; i<10; i++)
	{
		flag=0;
		for(j=k; j>=0;j--)
		{ 
		if (x[j]==array[i])
		  {
			flag=1;
			break;	
		  }
		}
	if (flag==0)
	   {
	   	k++;
	   	x[k]=array[i];
	   }
	   
	}
	for(int i=k+1;i<=9;i++)
	   {
	   	x[i]=0;
	   }
	for(int j=0; j<10;j++)
	cout<<x[j]<<endl;
}

void Switch(char a,int array[])
{
	switch(a)
			{
				case 1:  even(array);
				break;
				
				case 2: odd(array);
				break;
				
				case 3: ans= sum_avg(array);
				cout<<"the avg of no. is "<<ans<<endl;
				break;
				
				case 4: max(array);
				break;
				//
				case 5: min(array);
				break;
				
				case 6: duplicate(array);
				break;
				
				case 7: print_reverse(array);
				break;
				
				default: cout<<"Wrong input entered"<<endl;				
						
				
			}
}

void menu (int array[])
{
		char ch='y';
		do
		{
			int a;
			cout<<endl<<endl;
			cout<<"		#**************************#"<<endl;
			cout<<"		*        Menu              *"<<endl;
			cout<<"		*       ______             *"<<endl;
			cout<<"		* 1.Print Even Elements    *"<<endl;
			cout<<"		* 2.Print Odd Elements     *"<<endl;
			cout<<"		* 3.Find Sum and Average   *"<<endl;
			cout<<"		* 4.Find Maximum number    *"<<endl;
			cout<<"		* 5.Find Minimum number    *"<<endl;
			cout<<"		* 6.Remove duplicates      *"<<endl;
			cout<<"		* 7.Print num  in reverse  *"<<endl;
			cout<<"		#**************************#"<<endl;
			cout<<endl<<"Choose from menu - ";
			cin>>a;
			cout<<endl;
				Switch(a,array);
			cout <<"If you want to continue enter y else enter any key - ";  
	 		cin>>ch;
	 	
			
		}while(ch=='y'||ch=='Y');
	
}
