#include <iostream>
#include <conio.h>
using namespace std;
void Swap(int&p, int &q);
int main()
{
	int a,b;
	a=32;
	b=30;
	cout<<a<<" "<<b<<"main before\n";
	int *p =&a;
	int *q = &b;
	Swap( *p , *q);
	cout<<a<<" "<<b<<"main after\n";
	getch();
	return 0;
}
void Swap( int &p, int &q)
{
	cout<<p<<" "<<q<<"\n";
	swap(p,q);
	cout<<p<<" "<<q<<"\n";
}
