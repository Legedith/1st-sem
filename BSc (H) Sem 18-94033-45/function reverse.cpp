#include <iostream>
#include <conio.h>
using namespace std;
int reverse(int);
int main()
{
	int num,res;
	cout<<"Enter number to be reversed - ";
	cin>>num;
	res=reverse(num);
	cout<<"The reverse is - "<<res;
	getch();
	return 0;
}

int reverse (int i)
{
	int temp, result=0;
	while (i>0)
	{
		temp=i%10;
		result=result*10+temp;
		i/=10;
	}
	return result;
}
