#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
bool prime(int);
void SieveOfEratosthenes(int n);
int main()
{
	for(int i=1; i<=100; i++)
	{
		if (prime(i))
			cout<<i<<endl;
	}
	SieveOfEratosthenes(100);
	getch();
	return 0;
}
bool prime(int a)
{
	
	if ( a == 2)
		return true;
	if (a <2 || a%2==0)
		return false;
	for (int i = 3; i <= sqrt(a); i+=2)
	{
		if (a%i==0)
			return false;
	}
	return true;
}
void SieveOfEratosthenes(int n) 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    bool prime[n+1] ={true} ; 
    //memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p 
            for (int i=p*2; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  // Print all prime numbers 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " "; 
} 
