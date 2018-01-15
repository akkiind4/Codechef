#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fr(i,a,b)		for(int i=a;i<b;i++)
#define enter(a,n)			fr(i,0,n)cin>>a[i]
#define nl				cout<<'/n'
#define spc				cout<<" "
ull func(int x,int n,long long a[])
{
	ull sum=0;
	for(int i=x;i<=n;i+=x)
		sum+=(a[i]*a[i]);
	return sum;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		ll a[n];
		fr(i,0,n)
		a[i]=1;
		enter(a,n);
		int z,x;
		ll c;
		while(q--)
		{
			cin>>z;
			if(z==1)
			{
				cin>>x;
				cout<<func(x,n,a);
				spc;
			}
			else
			{
				cin>>x>>c;
				a[x]=c;
			}
		}
	}
	return 0;
}



