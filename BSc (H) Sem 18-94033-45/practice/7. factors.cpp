#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int num;
	while(true){
	
	cout<<"Enter a number;  ";
	cin>>num;
	for(int i=1; i<=num/2; i++)
		if (num%i == 0 )
			cout<<i<<endl;	
	cout<<num;		
}
	getch();
	return 0;
}
