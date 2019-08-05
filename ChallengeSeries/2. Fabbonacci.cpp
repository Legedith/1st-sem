//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms
#include <iostream>
#include <conio.h>
using namespace std;
long fabon(long);

int main()
{ 
	long input, sum;
	cout<<"Enter number of terms - ";
	cin>>input;
	sum = fabon(input);
	cout<<"The sum is "<<sum;
	getch();
	return 0;
}

long fabon (long x)
{
	long a=1, b=2, c, sum=2;
	cout<<"1\n2\n";
	while (b<x)
	{
		c=b;
		b=a+b;
		a=c;
		cout<<b<<"\n";
		if (b%2==0)
		{
			sum+=b;
		}
	}
return sum;	
}
