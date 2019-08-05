#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int limit, result = 0;
	cout<<"Enter a limit:  ";
	cin>>limit;
	for(int i =1; i<=limit;i++)
	{
		if (i%2==0)
			result-=i;
		else
			result+=i;
	}
	cout<<"The result is "<<result;
	getch();
	return 0;
}
