//Factors of a number
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	long long a,b,c,d=0;
	cout<<"Enter a number - ";
	cin>>a;
	b=1;
	while(b<=sqrt(a))
	{
	if(a%b==0)
	{
			cout<<b<<"*\n";
			for (c=2; c<=b && b%c!=0; c++)
			{
			}
			if (b==c)
			{
				d=b;
				cout<<d<<"\n";
			}
	}
	
	b+=2;
   }
   cout<<"Largest prime factor is "<<d;
   	getch();
	return 0;
}
