#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	long double a,b,c,d=3,e;
	long long f;
	a=2,b=3,c=4,f=2;
	
	while (c<1000)
	{
		e=4/(a*b*c);
		if(f%2==0)
		d=d+e;
		else
		d=d-e;
		a+=2;
		b+=2;
		c+=2;
		f++;
	}
	cout<<setprecision(1000)<<d;
	getch();
	return 0;
}
