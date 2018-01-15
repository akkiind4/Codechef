#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,k,u,q=0;
		cin>>k>>a>>b;
		u=abs(a-b)-1;
		if((abs(a-b))==k/2)
		q=0;
		else
		q= min(u,abs(k-2-u));
		cout<<q<<endl;
	}
	return 0;
}


