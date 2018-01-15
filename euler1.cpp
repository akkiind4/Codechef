#include <iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ull s=0;
		ll q = (n-1)/3;
		s+= 3*q*(q+1)/2;
		q = (n-1)/5;
		s+= 5*q*(q+1)/2;
		q = (n-1)/15;
		s-= 15*q*(q+1)/2;
		cout<<s<<endl;
	}
	return 0;
}
