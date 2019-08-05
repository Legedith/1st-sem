//Patern
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cout<<"Enter a number - ";
	cin>>c;
	b=1;
	a=1;
	e=1;
	d=c;
	while(a<=c, d>0)
	{
		while(e<=d)
			{
				cout<<"-";
				e+=2;	
    		}
    
		while(b<=a)
			{
				cout<<"*";
				b++;	
    		}	
    		cout<<"\n";
   	a++;
   	d--;
    b=1;
    e=1;
   }
	getch();
	return 0;
}
