//To find prime upto a number using while
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	long a,b,c,d,e=0;
	cout<<"Enter number - ";
	cin>>c;
	b=3;
	a=3;
	d=0;
	while(a<=sqrt(c))
	{
		if (c%a==0)
		{
		while (b<a,a%b!=0)
		{
			b+=2;
		}
		if(b==a)
		{
		
			d=b;
			cout<<d<<"*\n";
		}
	}
	b=3;
    e++;
	a+=2;
//	cout<<e<<" \n";
	}
	cout<<d<<" is the largest prime factor. ";
	cout<<sizeof(a);
	getch();
	return 0;
}
