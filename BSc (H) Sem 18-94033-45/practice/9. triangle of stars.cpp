#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int lines;
	cout<<"enter number of lines: ";
	cin>>lines;
	for(int i =1; i<=lines; i++)
	{
		for(int j = 0; j<lines-i; j++)
		{
			cout<<" ";
		}
		for(int k = 0; k<2*i-1;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	getch();
	return 0;
}
