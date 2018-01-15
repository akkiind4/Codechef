#include <bits/stdc++.h>
using namespace std;
int power(int x, unsigned int y, int p)
{
    int res = 1;      // Initialize result
    x = x % p;  // Update x if it is more than or
                // equal to p
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
 
 
// Function to find modular inverse of a under modulo p
// using Fermat's method. Assumption: p is prime
int modInverse(int a, int p)
{
   return power(a, p-2, p);
}
 
// Returns n! % p using Wilson's Theorem
int modFact(int n, int p)
{
    // n! % p is 0 if n >= p
    if (p <= n)
        return 0;
 
    // Initialize result as (p-1)! which is -1 or (p-1)
    int res = (p-1);
 
    // Multiply modulo inverse of all numbers from (n+1)
    // to p
    for (int i=n+1; i<p; i++)
       res  = (res * modInverse(i, p)) % p;
    return res;
}
int powerup(int x, unsigned int y, int p)
{
    int res = 1;      // Initialize result
 
    x = x % p;  // Update x if it is more than or 
                // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;  
    }
    return res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long t;
	cin>>t;
	int uni=1;
	while(t--)
	{
		int a,n,p;
		cin>>a>>n>>p;
		n = modFact(n,p);
		cout<<"Case #"<<uni<<": "<<powerup(a,n,p)<<endl; 
		uni++;
	}
	return 0;
}
