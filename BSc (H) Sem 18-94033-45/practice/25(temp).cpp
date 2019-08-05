#include<iostream>
#include<fstream>
using namespace std;
class student
{
	public:
		int roll,year,clas,marks;
		string name;
}s[10];
int main()
{
	ofstream of1;
	of1.open("f2.txt");
	if(!of1)
	{
		cout<<"unable to open file";
		exit(100);
	}
	of1<<"Roll no\tYear\tClass\tMarks\tname"<<endl;
	int i=0;
	while(i<10)
	{
		cout<<"roll no-";
		cin>>s[i].roll;
		cout<<"year-";
		cin>>s[i].year;
		cout<<"class-";
		cin>>s[i].clas;
		cout<<"marks-";
		cin>>s[i].marks;
		cout<<"name-";
		cin>>s[i].name;
		of1<<s[i].roll<<"\t"<<s[i].year<<"\t"<<s[i].clas<<"\t"<<s[i].marks<<"\t"<<s[i].name<<endl;
		i++;
	}
	of1.close();
	return 0;
}
