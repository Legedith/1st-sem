#include <iostream>
#include <conio.h>
using namespace std;
int series1(int);
int series2(int);

int main()
{
	int limit,s1,s2,difference;
	cout<<"Enter limit";
	cin>>limit;
	s1=series1(limit);
	s2=0;
	s2=series2(limit);
	difference=s1-s2;
	//cout<<s2;
	cout<<"Differernce is "<<difference;
	getch();
	return 0;
}

int series1(int x)
{
	long long sum=0,temp=0;
	while (x>=0)
	{
		sum+=temp;
		temp++;
		x--;
	}
	//cout<<sum<<"\n";
	sum*=sum;
	//cout<<sum<<"\n";
	return sum;
}


int series2(int x)
{
	long long sum=0,temp=0,t;
	while (x>=0)
	{
		t=temp*temp;
		sum+=t;
		temp++;
		x--;
	}
	//cout<<sum<<"\n";
	
	return sum;
}
