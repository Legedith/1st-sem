#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class box
	{
		int l,b,h;
		public:
			box();
			box(int,int,int);
			box(const box &a);
			~box();
			void read();
			void display();
			void check();
			float area();
			float volume();
			void operator++();
			const box operator++(int);
			box& operator--();
			const box operator--(int);
			box& operator= (const box& a);
			friend void operator==(const box& b1, const box& b2);
	};

box::box()
{
	l=0;
	b=0;
	h=0;
}
box::box(int a, int d, int c)
{
	l=a;
	b=d;
	h = c;
}
box::~box()
{
	cout<<"Destructing"<<endl;
}
box::box(const box &a)
{
	b= a.b;
	l=a.l;
	h=a.h;
}



void box::read()
{
	cout<<"Enter l,b,h of the box"<<endl;
	cin>>l>>b>>h;	
}
void box::display()
{
	cout<<"The Length, Breadth and height are "<<l<<" ,"	<<b<<", "<<h<<" respectively"<<endl;
}		
void box::check()
{
	if (l==b && b==h)
		cout<<"CUBE!"<<endl;
	else 
		cout<<"CUBOID!"<<endl;
}
float box::area()
{
	return (2*((l*b)+(b*h)+(l*h)));
}

float box::volume()
{
	return (l*b*h);
}
void box::operator++()
{
	b++;
	l++;
	h++;
	
}
const box box::operator++(int)
{
	const box c(*this);
	this->b++;
	this->l++;
	this->h++;
	return c;
}
box& box::operator--()
{
	this->b--;
	this->l--;
	this->h--;
	return (*this);
}
const box box::operator--(int)
{
	const box c(*this);
	this->b--;
	this->l--;
	this->h--;
	return c;
}
box& box::operator= (const box& a)
{
	b = a.b;
	l = a.l;
	h=a.h;
	return (*this);
}
void operator==(const box& a, const box& d)
{
	if ((a.b == d.b) && (a.l == d.l) && (a.h == d.h))
	{
		cout<<"Equal"<<endl;
	}
	else
	{
		cout<<"Not equal"<<endl;
	}
}

int main()
{
	//box b1;
	//b1.read();
	box b2(3,4,5);
//	b2.display();
//	b2 =b1;
//	b1 == b2;
	b2.display();
	++b2;
	b2.display();
//	b1 == b2;
//	b2--;
//	b1 == b2;
//	b2.read();
//	b2.check();
//	b2.display();
//	cout<<"			Enter your choice \n";
//	cout<<"		1. Read values \n";
//	cout<<"		2. Display values \n";
//	cout<<"		3. Check if cube or cuboid \n";
//	cout<<"		4. Calculate area \n";
//	cout<<"		5. Calculate volume \n";
//	cout<<"		6. Exit \n";
//	
//	while (2>1) 
//		{
//		int a = getch()-48;
//		switch (a)
//			{
//			case 1:
//				b1.read();
//			    break;
//			case 2:
//				b1.display();
//				break;
//			case 3:
//				b1.check();
//				break;
//			case 4:
//			    {
//				int area = b1.area();
//			    cout<<"Area is "<<area<<endl;
//			    break;
//				}
//			case 5:
//				{
//				int volume = b1.volume();
//				cout<<"Volume is "<<volume<<endl;
//			    break;
//				}
//			case 6:
//				exit(1);
//			default:
//				cout<<"Wrong input!"<<endl;
//			}
//		}
getch();
	return 0;
}
