#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	long double a=1,b=1,c,d,sum=0;
	cout<<"Enter limit- ";
	cin>>d;
	cout<<"1\n1\n";
	while(d>2)
	{
	c=b;
	b=a+b;
	sum =sum + 1/b;
	cout<<b<<"\n";
	a=c;
	d--;
	}
	cout<<"The golden ratio is "<<sum;
	
	getch();
	return 0;
}
