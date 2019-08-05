#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a;
	cout<<"Enter number - ";
	cin>>a;
	while(a!=42)
	{
		cout<<a<<"\nEnter number - ";
		cin>>a;
	}
	
	getch();
	return 0;
}
