#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a,b,c,sum=0,product=1;
	cout<<"Enter number here - ";
	cin>>a;
	b=a;
	for( ; b>0;b=b/10 )
	{
		c=b%10;
		sum=sum+c;
		product=product*c;
	}
	cout<<"The sum of digits of number "<<a<<" is "<<sum;
	cout<<"\nThe product of digits of number "<<a<<" is "<<product;
	
	getch ();
	return 0;
}
