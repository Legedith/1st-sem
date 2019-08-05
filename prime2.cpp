//To check if number is prime
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter number - ";
	cin>>a;
	
	for (b=2; b<a/2, a%b!=0; b++)
	{}
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
