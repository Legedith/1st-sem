#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int num, a=3;
	cout<<"Enter a number - ";
	cin>>num;
	if (num%2==0)
	cout<<"Not prime";
	else
	{
	while (a<=sqrt(num))
	{
		if (num%a==0)
		{
		cout<<"Not prime";
		break;
		}
		a+=2;
	}
	if(a>sqrt(num))
	cout<<"Prime";
	}
	getch();
	return 0;
}
