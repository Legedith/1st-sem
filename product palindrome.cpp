#include <iostream>
#include <conio.h>
using  namespace std;
int main()
{
	long long reverse=0, temp , original;
	long long a=999, b=999, product,d=0;
	while(b>=900)
	{
	
	while(a>=900 )
	{
//	product=1;
	reverse=0;
	product=a*b;
	original = product;
	for ( ; original>0;original/=10 )
	{
		temp = original%10;
		reverse  = reverse*10 + temp;
		//cout<<reverse<<"\n";
	}
	if (reverse == product)
	{
	cout<<product<<" of "<<a<<" and "<<b<<" \n";
	a=1;
	b=1;
	}
	a--;
	//cout<<a<<" #\n"
	}
	//d++;
//	cout<<product<<" *\n";
	a=999;
	b--;
	}
	
	
	
	
	getch();
	return 0;
}
