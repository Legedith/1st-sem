#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	//get first ordered array
	int n = 5;
	cin>>n;
	int *p = new int[n];
	for(int i=0; i<n; i++)
	{
		cin>>p[i];
	}
	//get second orderede array
	int m = 8;
	int *q = new int[m];
	for(int i=0; i<m; i++)
	{
		cin>>q[i];
	}
	
	//create a third array with size as sum of sizes of two arrays
	int r[n+m]={0};
	
	int i=0,j=0,k=0;
	while(i<n && j< m)
	{
		if (p[i]<q[j])
		{
			r[k]=p[i];
			k++; i++;
		}
		else{
			r[k] = q[j];
			k++; j++;
		}
	}
	for(int w =0; w<n+m; w++)
	{
		cout<<r[w]<<endl;
	}
	cout<<i<<j<<"*"<<endl<<(i<n)<<(j<m)<<endl;
	while(i<n)
	{
		r[k]=p[i];
		k++; i++;
	}
	while(j<m)
	{
		cout<<k<<"$"<<j<<endl;
		r[k]=q[j];
		k++; j++;
	}
	for(int w =0; w<n+m; w++)
	{
		cout<<r[w]<<endl;
	}
	return 0;
}
