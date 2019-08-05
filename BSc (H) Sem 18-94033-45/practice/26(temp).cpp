#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	ifstream f1;
	int a,b,c,d;
	f1.open("f2.txt");
	for(int i = 0; i<10; i++){
	f1>>a>>b>>c>>d;
	cout<<a<<setw(10)<<b<<setw(10)<<c<<setw(10)<<d<<setw(10)<<endl;
}
getch();
return 0;
}
