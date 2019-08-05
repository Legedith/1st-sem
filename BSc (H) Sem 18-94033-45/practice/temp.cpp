#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main(int argc, char** argv ){int alphabet[26] = {0};if (argc == 1)cout<<"Nothing passed\n";else{for(int i = 1; i<argc; i++){for(int j=0; argv[i][j]!='\0';j++){	cout<<"\n*** 2nd for***"<<i<<" "<<j<<" "<<argv[i][j]<<argc<<endl;if(argv[i][j]>=65 && argv[i][j]<=90){alphabet[argv[i][j]-65]++;}if (argv[i][j]>=97 && argv[i][j]<=122){alphabet[argv[i][j]-97]++;}cout<<"\n** 2nd for end **"<<i<<" "<<j<<" "<<argv[i][j]<<endl;}cout<<"\n** 1st for end **"<<i<<" "<<argc<<endl;}cout<<"\n** outside for **\n"<<argc;}cout<<"\n** outside else **\n"<<argc;for (int i=0; i<26; i++){	cout<<"\n** inside printer **\n";cout<<setw(10)<<char(i+'a')<<setw(10)<<alphabet[i]<<endl;}getch;return 0;}
