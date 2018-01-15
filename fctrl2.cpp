#include<iostream>
using namespace std;
int main()
{
	int t,n;
	long long q;
	cin>>t;
	while(t--)
	{
		q=1;
		cin>>n;
		while(n>1)
		{
			q*=n;
			n--;
		}
		cout<<q<<endl;
	}
	return 0;
}
