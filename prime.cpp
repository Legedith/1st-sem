//to find primes upto a number
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	 long a,b,c,d,e,f;
	cout<<"Enter number upto which you want to find primes - ";
	cin>>c;
	d=1;
	e=2;
	f=2;
	cout<<"\nList of PRIME NUMBERS upto "<<c<<" is as follows:\n\n2\n";
	for (a=3; a<=c; a++)
	{	
	for (b=2; b<a, a%b!=0; b++)
		{
		}
			if (b==a)
			{
				cout<<b<<"\n";
				d++;
				e=e+b;
				f=f*b;
			}	
		}
		cout<<"\nThere are total "<<d<<" Primes upto "<<c<<" and their sum is "<<e;
		//cout<<" and product is "<<f;
	getch();
	return 0;
}
