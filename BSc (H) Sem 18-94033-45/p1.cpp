#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n[5],sum=0,i;
	cout<<"Enter 5 elements";
	for(i=0;i<5;i++)
	{cin>>n[i];
	}
	cout<<"Entered elements are";
	for(i=0;i<5;i++)
	{
	cout<<n[i];
	sum=sum+n[i];
	}
	cout<<"The sum of the elements are:"<<sum;
	getch();
	return 0;
}
