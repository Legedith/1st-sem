#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	string s1, s2, s3;
	while (true){
	cout<<"String 1: ";
	getline(cin,s1);
	cout<<"String 2: ";
	getline(cin,s2);
	s3 =s1+s2;
	cout<<s1.compare(s2)<<endl<<s2.length();
}
	getch();
	return 0;
}
