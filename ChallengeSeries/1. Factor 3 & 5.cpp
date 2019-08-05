//finds if no. is div by 3 & 5 and gives their sum
#include <iostream>
#include <conio.h>
using namespace std;
int factor(int);
int main()
{
	int input,sum;
	cout<<"Enter the number -";
	cin>>input;
	sum = factor(input);
	cout<<"The sum of all factors is "<<sum;
	getch();
	return 0;
}

int factor(int x)
{
	int a=1, sum =0;
	while (a<x)
	{
		if (a%3==0 || a%5==0)
		{
		sum = sum+a;
		cout<<a<<"\n";
		}
	a++;
	}
	return sum;
}
