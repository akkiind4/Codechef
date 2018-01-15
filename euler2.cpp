#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fo(i,a,b)		for(int i=a;i<b;i++)
#define enter(a,n)			fo(i,0,n)cin>>a[i]
#define nl				cout<<'/n'
#define spc				cout<<" "
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long a=0,b=2,s=2;
		long long c;
		if(n<=2)
		{
			cout<<0<<endl;
			continue;
		}
		while(1)
		{
			c = 4*b+a;
			if(c>n)
			break;
			s+=c;
			a=b;
			b=c; 
		}
		cout<<s<<endl;
	}
	return 0;
}



