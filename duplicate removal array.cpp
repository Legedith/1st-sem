#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int array[10]={1,1,2,4,5,2,3,5,7,8};
	for(int i=0; i<10; i++)
	{
		if (array[i]==999)
		{}
		else 
		{
			int j = i;
			j++;
			for (; j<10;j++)
			{
				if (array[j]==array[i])
				{
					array[j]=999;
				}
			}
		}
	}
	
	for(int i = 0; i<10; i++)
	cout<<array[i]<<endl;
	
	
	getch();
	return 0;
}
