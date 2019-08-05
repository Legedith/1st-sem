#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>
using namespace std;
class student
{
	public:
	string name;
	int rollno, marks;
};
int main()
{
	student s[10];
	ofstream f1;
	f1.open("Details.txt");
	f1<<"Name\tRoll no.\tMarks\n";
	for(int i=0; i<10; i++)
	{
		cout<<"Enter details for student "<<i<<" : ";
		cin>>s[i].name>>s[i].rollno>>s[i].marks;
		f1<<s[i].name<<setw(10)<<s[i].rollno<<setw(10)<<s[i].marks<<endl;
	}
	f1.close();
	getch();
	return 0;
}
