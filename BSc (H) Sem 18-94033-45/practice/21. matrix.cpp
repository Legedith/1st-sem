#include <iostream>
#include <conio.h>
using namespace std;
class matrix
{
	public:
	int n,m;
	int **p;
	
		matrix();
		matrix(int,int);
		matrix(const matrix &m1);
		void read();
		void display();
		void setRows(int);
		void setCol(int);
		matrix add(const matrix &m1);
		matrix diff(const matrix &m1);
		void trans();
};
matrix::matrix()
{
	n = 1;
	m = 1;
	p = new int*[n];
	for(int i=0; i<n; i++)
	{
		*(p+i) = new int[m];
	}
}
matrix::matrix(int a,int b)
{
	n = a;
	m = b;
	p = new int*[n];
	for(int i=0; i<n; i++)
	{
		*(p+i) = new int[m];
	}
}
matrix::matrix(const matrix &m1)
{
	n = m1.n;
	m = m1.m;
	p = m1.p;
}
void matrix::setRows(int a)
{
	n = a;
	p = new int*[n];
	for(int i=0; i<n; i++)
	{
		*(p+i) = new int[m];
	}
}
void matrix::setCol(int a)
{
	m=a;
	for(int i=0; i<n; i++)
	{
		*(p+i) = new int[m];
	}
}
void matrix::display()
{
	for(int i = 0; i<n; i++)
	{
		for(int j=0; j<n;j++)
			cout<<*(*(p+i)+j)<<endl;
	}
}
void matrix::read()
{
	for(int i = 0; i<n; i++)
	{
		for(int j=0; j<n;j++)
			cin>>(*(*(p+i)+j));
	}
}
matrix matrix::add(const matrix &m1)
{
	if (n!=m1.n || m!= m1.m)
	{
		cout<<"Not possible...!";
		return m1;
	}
	matrix m3(n,m);
	for(int i = 0; i<n; i++)
	{
		for(int j=0; j<n;j++)
			(*(*(m3.p+i)+j)) = (*(*(p+i)+j))+(*(*(m1.p+i)+j));
	}
	return m3;
}
matrix matrix::diff(const matrix &m1)
{
	if (n!=m1.n || m!= m1.m)
	{
		cout<<"Not possible...!";
		return m1;
	}
	matrix m3(n,m);
	for(int i = 0; i<n; i++)
	{
		for(int j=0; j<n;j++)
			(*(*(m3.p+i)+j)) = (*(*(p+i)+j))-(*(*(m1.p+i)+j));
	}
	return m3;
}
matrix::trans()
{
	for(int i = 0; i<n; i++)
	{
		for(int j=0; j<n;j++)
			(*(*(m3.p+i)+j)) = (*(*(p+i)+j))-(*(*(m1.p+i)+j));
	}
}
int main()
{
	matrix me(1,1);
	matrix c;
	me.read();
	c.setRows(1);
	c.setCol(1);
	c.read();
	matrix mo;
	c.add(me).display();
	getch();
	return 0;
}
