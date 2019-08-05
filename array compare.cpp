#include <iostream>
int compare(int[], int[]);
	using namespace std;
	int main()
	{
		int ar1[10]={1,2,3,4,5,6,7,8,9,0};
		int ar2[10]={1,2,3,4,5,6,7,8,9,0};
		cout<<ar2.length();
		cout<<compare(ar1,ar2);
	}
	int compare(int a[], int b[])
	{
		for (int i =0; i<10; i++)
		{
			if (a[i] != b[i])
			 return -1;
		}
		return 1;
	}
	
