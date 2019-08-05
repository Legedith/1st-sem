#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	float limit, ans = 0;
	cout<<"Limit: ";
	cin>>limit;
	for (int i = 1; i <=limit; i++)
	{
		cout<<ans<<"*\n";
		ans+=1.0/i;
		cout<<ans<<"#\n";
	}
	cout<<"Answer is "<<ans;
	getch();
	return 0;
}
