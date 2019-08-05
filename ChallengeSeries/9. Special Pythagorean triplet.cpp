#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a=1,b=1,c=1;
	while(c<1000)
	{
	while(a<1000)
	{
	while (b<1000 )
		{
			if(a*a + b*b == c*c)
			{
				if(a==14)
					cout<<a<<" "<<b<<" "<<c<<"\n";
			}
			b++;
		}
	//cout<<b<<" ";
	b=1;
	a++;
	//cout<<a<<" * "<<c<<" # ";
	}
	a=1;
	c++;
	}
	cout<<"Shit";
	getch();
	return 0;
}
