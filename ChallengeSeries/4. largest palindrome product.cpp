//Largest palindrome product
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n=99801,a=99;
	while (a>10)
	{
	
	while (n>100)
	{
		if(n%a==0)
		{
			//cout<<n<<"\n";
			int reverse=0, temp=0 , original;
			original = n;
		for ( ; original>0; original/=10 )
		{
			temp = original%10;
			reverse  = reverse*10 + temp;
		}
		if (reverse == original)
		{
			cout<<n<<" Palindrome\n";
		}
		}
		n--;
	}
	n=99801;
	cout<<" 4";
	a--;
	}
	cout<<"end";
	getch();
	return 0;
}
