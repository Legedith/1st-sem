//Factors of a number
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	long long a,b,c;
	cout<<"Enter a number - ";
	cin>>a;
	b=1;
	c=1;
	while(b<=a/2)
	{
	
	if(a%b==0)
	{
		cout<<b<<"\n";
		c++;f
	}
	
	b+=2
	;
   }
   cout<<a<<" \nThere are total "<<c<<" factors";
	getch();
	return 0;
}
