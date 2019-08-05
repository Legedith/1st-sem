#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
	int arm, temp, count=0, rem;
	cin>>arm;
	temp = arm;
	while( arm/10 !=0)
	{
		count++;
		arm/=10;
	}
	count++;
	temp =0;
	for(int i = 0; i<count; i++)
	{
		rem = arm/10;
		cout<<rem<<endl;
		temp+= pow(rem,count);
		cout<<temp<<endl;
	}
getch();
return 0;
}
