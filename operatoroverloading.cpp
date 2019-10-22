#include <iostream>
using namespace std;
class box 
{
	int l,b,h;
	public : 
	box ()  {
	l=0; b=0;h=0; }
	box (int len,int bre ,int hgt)
	{
	l=len;
	b=bre;
	h=hgt;
	}
	
	void read();
	void display();
	box operator +(box);	// overloading the + operator...return type is box class...
	void operator ++ ();	// overloading the ++ prefix operator...return type is void...
	void operator ++ (int );			// overloading the ++ postfix operator...return type is void...
	void operator ==(box);
	void operator -- ();	
	void operator -- (int );
};
int flag;
void box :: operator == (box a)
{
	if(l==a.l&&b==a.b&&h==a.h)
	flag++;
	else
	flag=0;
}
void box :: operator -- (int)
{
	l--;
	b--;
	h--;
}
void box :: operator ++ (int)
{
	l++;
	b++;
	h++;
}
void box :: operator --()
{
	--l;
	--b;
	--h;
		
}
void box :: operator ++()
{
	++l;
	++b;
	++h;
		
}
void box :: read ()
{
	cin >> l;
	cin >> b;
	cin >> h;
}
void box :: display()
{
	cout << l << endl;
	cout << b << endl;
	cout << h << endl;
}
box box :: operator +(box a)
{
	box temp;
	temp.l=l+a.l;
	temp.b=b+a.b;
	temp.h=h+a.h;
	return temp;
	
}
int main ()
{
	box b1(2,3,1);
	box b2;
	cout << "Enter the length breadth and height for object b2" << endl;
	b2.read();
	
	cout << "Overloading the operator '+'... " << endl;
	box b3=b1+b2;
	cout << "BOX B1 is " << endl; b3.display();
	cout << "BOX B2 is "; b2.display();
	//cout << "BOX B3 is "; b3.display();
	cout << "--------------------------------------------------------" << endl;
	cout << "Overloading ++ operator... " << endl;
	++b2;
	cout << "cBOX B2 is "; b2.display();
	cout << "--------------------------------------------------------" << endl;
	cout << "Overloading the ++ postfix operator " << endl;
	b2++;
	cout << "cBOX B2 is "; b2.display();	
	cout << "--------------------------------------------------------" << endl;
	cout << "Overloading -- operator... " << endl;
	--b2;
	cout << "cBOX B2 is "; b2.display();
	cout << "--------------------------------------------------------" << endl;
	cout << "Overloading the -- postfix operator " << endl;
	b2--;
	cout << "cBOX B2 is "; b2.display();	
	cout << "--------------------------------------------------------" << endl;
	cout << "Overloading the == operator... " << endl;
	b1==b2;
	if(flag!=0)
	cout << "Both the objects are equal " << endl;
	else
	cout << "Both the objects are not equal " << endl;
	return 0;
}
