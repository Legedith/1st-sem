#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	cout<<"Enter number";
	cin>>a;
	c=1;
	f=1;
	d=2*a-2;
	while(c<a)
	{
		while(f<a)
		{
			cout<<"#";
			f++;
		}
		f=1;
		while(d<(2*a)-1)
		{
			cout<<"*";
			d++;
		}
		d=2*a-2;
		while(f<a)
		{
			cout<<"#";
			f++;
		}
		cout<<"\n";
		f=1;
		c++;
		d++;
	}	
	getch ();
	return 0;	
}
