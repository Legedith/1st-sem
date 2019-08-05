#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	float a,b,c,d;
	cout<<"Enter numer upto which you want to find series - ";
	cin>>a;
	b=2;
	c=1;
	cout<<1;
	while(b<=a)
	{
	 	c=c+1/b;
	 	cout<<" + 1/"<<b; 
		 b++; 
	}
	cout<<" = "<<c;
	
	getch();
	return 0;
	
}
