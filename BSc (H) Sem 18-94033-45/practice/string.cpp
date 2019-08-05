#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main() {
string strl ("DU University");
string str2 ("DU Union");
int result;
result= strl.compare(str2);
cout <<result;
result = strl.compare(0, 6, str2);
cout << result; 
 /* return 0;
}*/

