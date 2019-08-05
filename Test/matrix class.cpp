#include <iostream>
#include <conio.h>
using namespace std;
class matrix
{
	int m , n;
	int mat[10][10];
	public:
	matrix();
	matrix(int, int);
	void read();
	void display();
	matrix multiply(const matrix &m1);
	~matrix();	
};
matrix::matrix()
{
	m=10;
	n=10;
	for(int i = 0; i<m; i++)
	{
		for(int j = 0; j<n; j++)
		{
			mat[i][j] = 0;
		}
	}
}
matrix::matrix(int a, int b)
{
	m=a;
	n=b;
	for(int i = 0; i<m; i++)
	{
		for(int j = 0; j<n; j++)
		{
			mat[i][j] = 0;
		}
	}
}
matrix::~matrix()
{
}
void matrix::display()
{
	for(int i = 0; i<m; i++)
	{
		for(int j = 0; j<n; j++)
		{
			cout<<mat[i][j]<<"	";
		}
		cout<<endl;
	}
}
void matrix::read()
{
	for(int i = 0; i<m; i++)
	{
		for(int j = 0; j<n; j++)
		{
			cout<<"Enter element "<<i<<" , "<<j<<" :";
			cin>>mat[i][j];
			
		}
	}
}
matrix matrix::multiply(const matrix &m1)
{
	matrix temp(m,m1.n);
	for(int i = 0; i<m; i++)
	{
		for(int j = 0; j<n; j++)
		{
			temp.mat[i][j] = (mat[i][0]*m1.mat[0][j])+(mat[i][1]*m1.mat[1][j])+(mat[i][2]*m1.mat[2][j]);
		}
	}
	return temp;
}
int main()
{
	int a = 0;
	matrix m1(3,3) ,m2(3,3),m3(3,3);
	
	while (a!=4)
	{
	
	cout<<"Choose from the following: "<<endl;
	cout<<"1. Read a matrix "<<endl;
	cout<<"2. Dislpay a matrix "<<endl;
	cout<<"3. Multiply 2 matrix "<<endl;
	cin>>a;
		switch (a)
		{
			case 1:{
				m1.read();
				break;
				}
			case 2: m1.display();
					break;
			case 3:{
					m2.read();
					m3 = m1.multiply(m2);
					m3.display();
				break;
			}
			case 4: break;	
			default: cout<<"Wrong input entered ";
		}
	}
	getch();
	return 0;
}
