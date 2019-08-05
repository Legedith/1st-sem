#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	while (true){
	
	string s,t;
	cout<<"Enter a string to check: ";
	getline(cin,s);
	int l  = s.length();
	bool flag = false;
	for (int i =0; i <l/2; i++)
	{
		cout<<s[i]<<s[l-1-i]<<endl;
		if (s[i] != s[l-i-1] )
		{
			flag = true;
			break;
		}
	}
	if (flag == true)
		cout<<"Not palindrome\n";
	else
		cout<<"palindrome\n";
	}
	getch();
	return 0;
}
