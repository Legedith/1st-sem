#include <iostream>
#include <conio.h>
#define swap(a,b) b=b+a; a=b-a; b=b-a;
using namespace std;

int main()
{
	int a  = 11, b=4;
	swap(a,b);
	cout<<a<<endl<<b;
}
