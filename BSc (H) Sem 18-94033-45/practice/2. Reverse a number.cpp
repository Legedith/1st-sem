#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int num, reverse = 0, rem , copy;
	//get a number 
	cout<<"Enter number: ";
	cin>>num;
	copy  = num;
	//while number still has digits
	while(copy!=0)
	{
	//take last digit
		rem = copy%10;
	//multiply the current reverse with 10 and add last digit to it
		reverse = reverse*10 + rem;
	//shift number right
		copy/=10;
	}
	//print reverse
	cout<<"The reversed number is "<<reverse;
	getch();
	return 0;
}
