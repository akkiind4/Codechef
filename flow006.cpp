#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,q=0;
		while(n)
		{
			i=n%10;
			q=q*10+i;
			n/=10;
		}
		cout<<q<<endl;
	}
	return 0;
}


