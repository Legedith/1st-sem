#include <iostream>
#include <conio.h>
using namespace std;
void add(int *p);
int main()
{
	int a = 7;
	int *p = &a;
	cout<<*p;
	add(p);
	cout<<a;
}
void add(int *p)
{
	cout<<*p<<" $ "<<p<<endl;
	(*p)++;
	cout<<*p<<endl;
}
