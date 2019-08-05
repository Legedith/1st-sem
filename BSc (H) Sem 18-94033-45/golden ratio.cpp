#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	long double a=2,b=1000,s=1;

	while (b>s)
	{
	a=1.0+1.0/a;
	s++;
	}
	cout<< setprecision(100)<<showpoint;

	cout<<a<<" is golden ratio";
	
	getch();
	return 0;
	}
	
