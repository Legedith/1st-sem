#include<iostream>
#include <conio.h>
using namespace std;
void even(int []);
void odd(int []);
float sum_avg(int []);
float min(int []);
float max(int []);
void duplicate(int []);
void print_reverse(int []);
void menu(int []);
void read_array(int array[]);
void Switch(char a, int []);
int x;

int main()
{
	cout<<"Enter number of elements of array - ";
	cin>>x;
	int array [x];
	read_array( array);
	menu (array);
	return 0;
}
 
void even(int array[])
{
	int a;
	for(int i=0,a=0;i<x;i++)
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
	for(int i=0;i<x;i++)
	{
		if (array[i]%2!=0)
		cout<<array[i]<<endl;
	}
}

float sum_avg(int array[])
{
	float sum=0;
	float avg;
	for(int i=0;i<x;i++)
	{
		sum+=array[i];
	}
	cout<<"The sum of numbers is "<<sum<<endl;
	avg=sum/x;
	
	return avg;
}

float min(int array[])
{
	int min =array[0];
	for(int i=1;i<x;i++)
	{
		if(min>array[i])
		min=array[i];
	}
	
	return min;
}

float max(int array[])
{
	int max =array[0];
	for(int i=1;i<x;i++)
	{
		if(max<array[i])
		max=array[i];
	}
	
	return max;
}

void print_reverse(int array[])
{
	for(int i=(x-1);i>=0;i--)
	cout<<array[i]<<endl;
	
}

void duplicate(int array[])
{
	int temp[x],j,k=0,flag=0;
	temp[k]=array[0];
	for(int i=0; i<x; i++)
	{
		flag=0;
		for(j=k; j>=0;j--)
		{ 
		if (temp[j]==array[i])
		  {
			flag=1;
			break;	
		  }
		}
	if (flag==0)
	   {
	   	k++;
	   	temp[k]=array[i];
	   }
	   
	}
	for(int i=k+1;i<=x-1;i++)
	   {
	   	temp[i]=0;
	   }
	for(int j=0; j<x;j++)
	cout<<temp[j]<<endl;
}

void Switch(char a,int array[])
{
	switch(a)
			{
				case 1:  even(array);
				break;
				
				case 2: odd(array);
				break;
				
				case 3: {float avg = sum_avg(array);
				cout<<"the avg of no. is "<<avg<<endl;
				break;}
				
				case 4: {int max =max(array);
						cout<<"The maximum no. is "<<max<<endl;
				break;}
				//
				case 5:{ int min =  min(array);
						cout<<"the minimum is "<<min<<endl;
				break;}
				
				case 6: duplicate(array);
				break;
				
				case 7: print_reverse(array);
				break;
				case 8: read_array(array);
				break;
				case 9:
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
			cout<<"		* 8.Re-enter array         *"<<endl;
			cout<<"		* 9.Exit                   *"<<endl;
			cout<<"		#**************************#"<<endl;
			cout<<endl<<"Choose from menu - ";
			cin>>a;
			cout<<endl;
			Switch(a,array);
			cout <<"If you want to continue enter y else enter any key - ";  
	 		cin>>ch;
	 	
			
		}while(ch=='y'||ch=='Y');
	
}
void read_array(int array[])
{
	
	for (int i=0, j=1; i<x; i++,j++)
	{
		cout<<"\nEnter element "<<j<<" of array - ";
		cin>>array[i];
	}
		
}
