#include <iostream>
#include <conio.h>
using namespace std;
void enter(int [], int );
void display(int [], int);
void even(int [], int );
void odd( int [], int );
void sumAvg(int [], int );
int Max(int [], int );
int Min(int [] , int );
void dup(int [], int );
void reverse(int [], int );
int main ()
{
 	int n;
 	cout<<"Enter the size of the array: ";
 	cin>>n;
	int *p = new int[n];
	enter(p,n);
	char a ='w';
	do{
		
	cout<<"Enter your choice: \n";
	cout<<"0. exit\n";
	cout<<"1. re enter array\n";
	cout<<"2. display array\n";
	cout<<"3. print even\n";
	cout<<"4. print odd\n";
	cout<<"5. sum and average\n";
	cout<<"6. max\n";
	cout<<"7. min \n";
	cout<<"8. dup \n";
	cout<<"9. reverse\n";
	cin>>a;
	
		switch (a)
		{
			case '0': exit(100);
			case '1': enter(p,n);
			break;
			case '2': display(p,n);
			break;
			case '3':even(p,n);
			break;
			case '4':odd(p,n);
			break;
			case '5':sumAvg(p,n);
			break;
			case '6':cout<<Max(p,n)<<endl;
				break;
			case '7':cout<<Min(p,n)<<endl;
			break;
			case '8': dup(p,n);
			break;
			case '9': reverse(p,n);
			break;
			default:cout<<"wrong input\n";
		}
		cout<<"do you want ot continue: ";
		cin>>a;
	}while((a=='y' )|| (a='Y'));
	display(p,n);
	getch();
 	return 0;
}
void enter(int p[],int n)
{
	for(int i =0; i<n;i++)
		cin>>p[i];
	
}
void display(int p[], int n)
{
	for(int i =0; i<n;i++)
		cout<<p[i]<<endl;
}
void even(int p[], int n)
{
	for(int i =0; i<n;i++)
	{
		if (p[i]%2==0)
			cout<<p[i]<<endl;
	}
}
void odd( int p[], int n)
	{
	for(int i =0; i<n;i++)
	{
		if (p[i]%2!=0)
			cout<<p[i]<<endl;
	}
}

void sumAvg(int p[], int n)
{
	float sum,avg;
	for(int i =0; i<n;i++)
	{
		sum+=p[i];
	}
	avg = sum/n;
	cout<<sum<<endl<<avg;
}
int Max(int p[], int n)
{
	int max = p[0];
	
	for(int i =1; i<n;i++)
	{
		if (max<p[i])
			max = p[i];
	}
	return max;
}
int Min(int p[] , int n)
{
	int min = p[0];
	
	for(int i =1; i<n;i++)
	{
		if (min>p[i])
			min = p[i];
	}
	return min;
}
void dup(int p[], int n )
{
	int e;
	for(int i =0; i<n;i++)
	{
		e= p[i];
		for(int j =i+1; j<n;j++)
		{
			if (p[i]==p[j])
				p[j]=-999999;
		}
		display(p,n);
	}
	display(p,n);
	for(int i =0, j = 1; i<n, j<n;i++)
	{
		if (p[i]==-999999)
		{
			while(p[j]==-999999)
			{
				j++;
			}
			swap(p[i],p[j]);
			j++;
			display(p,n);
		}
	}
	display(p,n);
}
void reverse(int p[], int n)
{
	for(int i =0; i<n/2;i++)
		swap(p[i],p[n-i-1]);
}
