#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
	string s1, s2;
	int length;
	cout<<"Enter string 1: ";
	getline(cin,s1);
	cout<<"Enter string 2: ";
	getline(cin,s2);
	length = s1.length()+s2.length();
	char result[length];
	for (int i =0; i <s1.length(); i++)
	{
		result[i] = s1[i];
	}
	length = s1.length();
	for (int i =0; i <s2.length(); i++)
	{
		result[length+i] = s2[i];
	}
	cout<<"Resultant string is :";
	for(int i = 0; i<(s1.length()+s2.length()); i++)
	{
		cout<<result[i];
	}
	cout<<endl;
	getch();
	return 0;
}

