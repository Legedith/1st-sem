#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
void prime(int);
int main()
{
	int num;
	cout<<"Enter a number - ";
	cin>>num;
	prime(num);
	getch();
	return 0;
}

void prime(int x)
{
	int a=3;
	if (x%2==0)
	cout<<"Not prime";
	else
	{
		while (a<=sqrt(x))
		{
			if (x%a==0)
			{
				cout<<"Not prime";
				break;
			}
		a+=2;
	}
	if(a>sqrt(x))
		cout<<"Prime";
	}
	
}
