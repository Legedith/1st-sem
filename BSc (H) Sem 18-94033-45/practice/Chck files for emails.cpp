#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
bool isEmail(string);
int main()
{
	ifstream f1;
	ofstream f2;
	string c;
	f1.open("input.txt");
	f2.open("output.txt");
	while (f1>>c)
	{
		if (isEmail(c))
		{
			f2<<c<<endl;
		}
		else
		{
			f2<<"ERROR"<<endl;
		}
	}
	f1.close();
	f2.close();

}
bool isEmail(string a)
{
	int n=0;
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]=='@')
			n++;
	}
	if(n==1)
		return true;
	return false;
}

