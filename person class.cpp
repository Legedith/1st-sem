#include <iostream>
#include <conio.h>
using namespace std;
class person
	{
		protected:
			string name;
			int age;
		public:
			person()
			{
				age = 0;
				name = "";
			}
			person(string,int);
			~person();
			person(const person &p);
			void getName();
			void getAge();
			void setName(string);
			void setAge(int);
			virtual	void speak(string);
			virtual void display();
	};
person::person(string a, int b)
{
	name = a;
	age = b;
}
person::~person()
{
	cout<<"Destructing person object"<<endl;
}
void person::getAge()
{
	cout<<age<<endl;
}
void person::setAge(int a)
{
	age = a;
}
void person::getName()
{
	cout<<name<<endl;
}
void person::setName(string s)
{
	name = s;
}
void person::speak(string text)
{
	cout<<name<<" says: "<<text;
}
void person::display()
{
	cout<<"Name:	"<<name<<endl;
	cout<<"Age:		"<<age<<endl;
}
person::person(const person &p)
{
	name = p.name;
	age = p.age;
}
class student:public person
{
	protected:
		int student_id;
		string major;
	public:
		student();
		student(int,string,string, int);
		student(const student &s);
		virtual void display();
		virtual	void speak(string);
		void getStudent_id();
		void setStudent_id();
		void getMajor();
		void setMajor();
};

student::student()
{
	person("",0);
	student_id = 0;
	major = "None";
}

student::student(int a, string b, string c, int d)
{
	person(c,d);
	student_id = a;
	major = b;
}

student::student(const student &s)
{
	student_id = s.student_id;
	major = s.major;
	name = s.name;
	age = s.age;
}

int main()
{
	person nishank, ditto;
	nishank.setAge(19);
	nishank.setName("Nishank Kesari");
	nishank.display();
	ditto = nishank;
	ditto.display();
	nishank.speak("Second round about to start");
	getch();
	return 0;
	
}
