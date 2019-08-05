#include<iostream>
#include<conio.h>
#include <iomanip>
using namespace std;
int pyramid(int);
int pattern(int);
int main()
{
	int n,m,call,ask;
	cout<<"enter the no. of lines for pattern 1 - ";
	cin>>n;
	call=pattern(n);
	cout<<"enter the no. of lines for pattern 2- ";
	cin>>m;
	ask=pyramid(m);
	
	getch();
	return 0;
}
int pattern(int lines)
{
	int a,b;
	a=0;
	b=0;
	while(b<=lines)
	{
		while(a<b)
		{
			cout<<"*";
            a++;
        
		}
		cout<<"\n";
	
	    a=0;
		b++;
	}
	return 0;
}
int pyramid (int lines)
{ 
    int a,b,c;
    c=lines-1;
    a=0;
    b=0;
    while (b<=lines )
    {
    	while (a<=c)
    	{ 
    	cout<<"#";
    	a++;
    	}
    	a=0;
    	while (a<2*b-1)
    	{
    	
    	cout<<"*";
            a++;
        
		}
		a=0;
			while (a<=c)
    	{ 
    	cout<<"#";
    	a++;
    	}
    	a=0;
		
	cout<<"\n";
   
	b++;
    c--;
    }
}
