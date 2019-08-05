/*program to compute the sum of first 'n' terms of the following series
S=1+1/2+1/3+1/4+-----*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number till you want the series ";
	cin>>n;
	double s=0,d=1;
	for(int i=1;i<=n;i++)
	{
		s=s+1/d;
		++d;
	}
	cout<<"\n The sum of the series is :"<<" "<<s;
	getch();
	return 0;
}

























