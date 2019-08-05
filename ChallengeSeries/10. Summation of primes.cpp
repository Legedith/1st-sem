#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	long long num=3,a=3,limit, sum=2;
	cout<<"Enter a number - ";
	cin>>limit;
	cout<<"2\n";
	while(limit>num)
	{
	//if (num==2)
	//cout<<"Prime";
	//if (num%2==0)
	//cout<<"Not prime";
	//else
	//{
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
			sum+=num;
		}
	//}
	a=3;
	num+=2;
	}
	cout<<sum;
	getch();
	return 0;
}
