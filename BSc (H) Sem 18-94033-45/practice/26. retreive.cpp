#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	ifstream f1;
	f1.open("Details.txt");
	if(!f1)
	{
		cout<<"No such file exists!";
		exit(100);
	}
	string a;
	int b,c;
	while (f1>>a>>b>>c)
	{
		cout<<a<<"\t"<<b<<"\t"<<c<<endl;
	}
	f1.close();
	getch();
	return 0;
}
