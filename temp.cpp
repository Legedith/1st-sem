#include<iostream>
#include <conio.h>
void pointer(int*, int*);
using namespace std;
int main()
{
	int a = 13,b =90;
	int* p,*q;
	p = &a;
	q = &b;
	pointer(p,q);
	cout<<a<<b;
	getch();
	return 0;
}
void pointer(int *p1, int* p2)
{
	int temp = *p1;
	*p1=*p2;
	*p2 =temp;
}
