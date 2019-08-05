#include <iostream>
#include <conio.h>
using namespace std;
void palindrome(int);

int main()
{
	int input;
	cout<<"Enter a number - ";
	cin>>input;
	palindrome(input);
	getch ();
	return 0;
}

void palindrome (int x)
{
	int reverse=0, temp , original;
	original = x;
	for ( ; x>0;x/=10 )
	{
		temp = x%10;
		reverse  = reverse*10 + temp;
	}
	if (reverse == original)
	cout<<"Palindrome";
	else
	cout<<"Not palindrome";
}
