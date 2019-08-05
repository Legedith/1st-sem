#include <conio.h>
#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    if(!in)
    {
        cout<<"The input file can not open"<<endl;
        exit(100);
    }
     if(!out)
    {
        cout<<"The output file cannot open"<<endl;
        exit(100);
    }
    int a;
    int ar[20],b=0;
    while( in>>a)
    {
        ar[b]=a;
        b++;
    }
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b-i;j++)
        {
            if(ar[j]>ar[j+1])
            {
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    for(int i=0;i<b;i++)
    {
        cout<<ar[i];
    }
    in.close();
    out.close();
    getch();
    return 0;
}

