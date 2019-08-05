#include <iostream>
#include <conio.h>
using namespace std;
class person
	{
		protected:
			string name;
			int age;
		public:
			person();
			person(string,int);
			~person();
			person(const person &p);
			string getName();
			int getAge();
			void setName(string);
			void setAge(int);
			virtual	void speak(string);
			virtual void display();
	};
person::person()
			{
				age = 0;
				name = "";
			}
person::person(string a, int b)
{
	name = a;
	age = b;
}
person::~person()
{
	cout<<"Destructing person object"<<endl;
}
int person::getAge()
{
	return age;
}
void person::setAge(int a)
{
	age = a;
}
string person::getName()
{
	return name;
}
void person::setName(string s)
{
	name = s;
}
void person::speak(string text)
{
	cout<<name<<" says: "<<text<<endl;
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
		~student();
		virtual void display();
		virtual	void speak(string);
		void getStudent_id();
		void setStudent_id(int);
		void getMajor();
		void setMajor(string);
};

student::student()
{
	person(" ",0);
	student_id = 0;
	major = "None";
}
student::~student()
{
	cout<<"Destructing student object"<<endl;
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
void student::display()
{
	person::display();
	cout<<"Student ID:	"<<student_id<<endl;
	cout<<"Major:		"<<major<<endl;
	
}
void student::speak(string s)
{
	person::speak(s);
	cout<<"	Bro..."<<endl;
}
void student::getStudent_id()
{
	cout<<student_id<<endl;
}
void student::setStudent_id(int a)
{
	student_id = a;
}
void student::getMajor()
{
	cout<<major<<endl;
}
void student::setMajor(string a)
{
	major = a;
}
class teacher:public person
{
	protected:
		int teacher_id;
		string dept;
	public:
		teacher();
		teacher(int,string,string, int);
		teacher(const teacher &s);
		~teacher();
		virtual void display();
		virtual	void speak(string);
		void getTeacher_id();
		void setTeacher_id(int);
		void getDept();
		void setDept(string);
};

teacher::teacher()
{
	person(" ", 1 );
	teacher_id = 1;
	dept = "None";
}
teacher::~teacher()
{
	cout<<"Destructing teacher object"<<endl;
}
teacher::teacher(int a, string b, string c, int d)
{
	person(c,d);
	teacher_id = a;
	dept = b;
}

teacher::teacher(const teacher &s)
{
	teacher_id = s.teacher_id;
	dept = s.dept;
	name = s.name;
	age = s.age;
}
void teacher::display()
{
	person::display();
	cout<<"Teacher ID:	"<<teacher_id<<endl;
	cout<<"Dept. :		"<<dept<<endl;
	
}
void teacher::speak(string s)
{
	person::speak(s);
	cout<<"	It is very important. "<<endl;
}
void teacher::getTeacher_id()
{
	cout<<teacher_id<<endl;
}
void teacher::setTeacher_id(int a)
{
	teacher_id = a;
}
void teacher::getDept()
{
	cout<<dept<<endl;
}
void teacher::setDept(string a)
{
	dept = a;
}

int main()
{
	person *ja;
	ja = new person();
	ja->display();
	ja->setName("Jatin");
	ja->setAge(17);
	ja->speak("Second round about to start");
	ja->display();
	delete ja;
	ja = new student();
	ja->display();
	ja->setName("J");
	ja->setAge(10);
	ja->setStudent_id(45);
	ja->speak("Second round about to start");
	ja->setMajor("Economics");
	ja->display();	
	teacher *jr;
	jr = new teacher();
	jr->display();
	jr->setName("Jr");
	jr->setAge(71);
	jr->speak("Second round about to start");
	jr->setTeacher_id(23);
	jr->setDept("Computers");
	jr->display();
	getch();
	return 0;
	
}
