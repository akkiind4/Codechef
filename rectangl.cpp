		#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			if(a==b&&c==d)
				cout<<"YES"<<endl;
			else if(a==c&&b==d)
				cout<<"YES"<<endl;
			else if(a==d&&b==c)
				cout<<"YES"<<endl;
			else 
				cout<<"NO"<<endl;
	}
	return 0;
}