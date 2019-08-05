//To check if number is prime
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter number - ";
	cin>>a;
	
	for (b=2; b<a, a%b!=0; b++)
	{
	}
	if (b==a)
	{
		cout<<"Prime";
	}
	else
	{
		cout<<"Not prime";
	}
	
	getch();
	return 0;
}
