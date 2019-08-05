#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class triangle
{
	int s1, s2, s3 , height, base;
	float area;
	public:
		triangle();
		triangle(int,int);
		triangle(int,int,int);
		void read(int, int);
		void read(int,int,int);
		float Area(int,int);
		float Area(int,int,int);
		void operator=(const triangle& t);
		friend bool operator==(const triangle& t1 , const triangle& t2); 
};
triangle::triangle()
{
	s1 = 0;
	s2 = 0;
	s3 = 0;
	height = 0;
	base = 0;
}
triangle::triangle(int a, int b, int c)
{
	s1=a;
	s2=b;
	s3 = c;
}
triangle::triangle(int h, int b)
{
	height = h;
	base = b;
}
float triangle::Area(int a , int b)
{
	return (0.5*a*b);
}
float triangle::Area(int a , int b, int c)
{
	float s = (a+b+c)*0.5;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
void triangle::operator=(const triangle& t)
{
	s1 = t.s1;
	s2 = t.s2;
	s3 = t.s3;
	height = t.height;
	base = t.base;
}
bool operator==(const triangle& t1 , const triangle& t2)
{
	if (t1.s1 == t2.s1 && t1.s2 == t2.s2 && t1.s3 == t2.s3 && t1.height == t2.height && t1.base == t2.base)
		return true;
	return false;
}
void triangle::read(int a,int b,int c)
{
	s1 = a;
	s2=b;
	s3=c;
}
void triangle::read(int h, int b)
{
	height =h;
	base  = b;
}
int main()
{
	triangle t1;
	triangle t2(3,4);
	triangle t3(3,4,5);
	cout<<(t2==t3);
	t2 =t3;
	cout<<(t2==t3);
}
