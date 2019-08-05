#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double n,s=0;
	cout<<"Enter the number till you want the series ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{	
		if(i%2!=0)
		s+=i;
		else
		s-=1;
	}
	cout<<"\n The sum of the series is :"<<" "<<s;
	getch();
	return 0;
}

























