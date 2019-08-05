#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	long long a=1,b=1,c,d,e=0;
	cout<<"Enter limit- ";
	cin>>d;
	cout<<"1\n1\n";
	while(d>2)
	{
	c=b;
	b=a+b;
	cout<<b<<"\n";
	a=c;
	while(e<100000000)
	e++;
	e=0;
	}
	
	getch();
	return 0;
}
