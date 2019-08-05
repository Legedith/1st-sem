#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char*arg[])
{
	int count[26]={0};
	
	if (argc<2)
	{
		cout<<"No Input";
		exit(100);
	}
	
	for (int i =1; i<argc;i++)
	{
		for (int j =0; arg[i][j]!=' ';j++)
		{
			if (arg[i][j]>='a' && arg[i][j]<='z')
			{
				count[(int)arg[i][j]-97]++;
			}			
			if (arg[i][j]>='A' && arg[i][j]<='Z')
			{
				count[(int)arg[i][j]-65]++;
			}			
		}
	}
	
	for (int k = 0; k<26; k++)
	{
		cout<<(char)(k+65)<<"	"<<(char)(k+97)<<"	"<<count[k];
	}
	
	getch();
	return 0;
}
