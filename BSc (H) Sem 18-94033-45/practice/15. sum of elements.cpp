#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	cout<<"enter no of elements: ";
	int n, sum = 0;
	cin>>n;
	int *p = new int[n];
	for(int i=0; i<n; i++)
	{
		cin>>p[i];
		sum+=p[i];
	}
	cout<<" The sum is "<<sum<<endl; 
}
