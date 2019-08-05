#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
	int a[100];
	int n = 0;
	ifstream f1;
	char c;
	f1.open("input.txt");
	if(!f1)
	{
		cout<<"Couldn't open source file!";
		exit(100);
	}
	while (f1>>c)
	{
		a[n] = (int)c - 48;
		n++;
	}
	f1.close();
	cout<<"Before: ";
	for(int i=0; i<n; i++)
	{

		cout<<a[i]<<" ";
	}
	for(int i =1; i<n; i++)
	{
		for(int j = i-1; j>=0; j--)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
			else
				break;
		}
	}
	cout<<"\nAfter: ";
	for(int i=0; i<n; i++)
	{

		cout<<a[i]<<" ";
	}

	getch();
}

