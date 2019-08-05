#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main(int argc, char** argv )
{
	int alphabet[26] = {0};
	if (argc == 1)
	{
		cout<<"Nothing passed\n";
		exit(100);
	}
	else{
		for(int i = 1; i<argc; i++)
		{
			for(int j=0; argv[i][j]!='\0';j++)
			{
				if(argv[i][j]>=65 && argv[i][j]<=90)
				{
					alphabet[argv[i][j]-65]++;
				}
				if (argv[i][j]>=97 && argv[i][j]<=122)
				{
					alphabet[argv[i][j]-97]++;
				}
			}
		}
	}
	for (int i=0; i<26; i++)
	{
		cout<<setw(10)<<char(i+'a')<<setw(10)<<alphabet[i]<<endl;
	}
	getch;
	return 0;
}
