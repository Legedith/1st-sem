//Patern trial
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter a number - ";
	cin>>c;
	b=1;
	a=c;
	while(a>0)
	{
		while(b<=a)
			{
				cout<<"*";
				b+=2;	
    		}
    		cout<<"\n";
   	a-=2;
    b=1;
   }
	getch();
	return 0;
}
