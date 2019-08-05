#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int num,copy, rem, sum = 0, pro = 1;
	cout<<"Enter number:	";
	cin>>num;
	copy = num;
	while(copy!=0)
	{
		rem  = copy%10;
		sum+=rem;
		pro*=rem;
		copy/=10;
	}
	cout<<"Sum is "<<sum<<". Product is "<<pro<<endl;
	getch();
	return 0;
}
