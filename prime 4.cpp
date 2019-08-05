//To find n^th prime upto 25th prime
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter number - ";
	cin>>c;
	b=2;
	d=2;
	a=3;
	while(a<100)
	{
	while (b<a,a%b!=0)
	{
		b++;
	}
	if(b==a)
	{
		if (d==c)
		{
			cout<<a<<"\n";
			a=100;	
		}
		else
		{ 
			d++;
		}	
	}
	b=2;
	a++;
	}
	getch();
	return 0;
}
