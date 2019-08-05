#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int num=3,a=3,limit, end;
	cout<<"Enter a number - ";
	cin>>end;
	//cout<<"2\n";
	while(end>1)
	{
	if (num==2)
	cout<<"Prime";
	else if (num%2==0)
	cout<<"Not prime";
	else
	{
		while(a<=sqrt(num))
		{
			if (num%a==0)
			{
			//cout<<"Not prime";
			break;
			}
		a+=2;
		}
		if (a>sqrt(num))
		{
			limit=num;
			end--;
		}
	}
	a=3;
	num+=2;
	}
	cout<<limit;
	getch();
	return 0;
}
