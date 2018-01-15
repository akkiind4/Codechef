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
		int n;
		ll q;
		vector< vector<ll> >v;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			std::vector<ll> v2;
			for(int j=0;j<n;j++)
			{
				cin>>q;
				v2.push_back(q);
			}
			sort(v2.begin(),v2.end());
			v.push_back(v2);
		}
		ll sum=v[n-1][n-1];
		ll w  = v[n-1][n-1];
		for(int i=n-2;i>=0;i--)
		{
			int flag=0;
			for (int j = n-1; j >= 0; j--)
			{
				if(v[i][j]<w)
				{
					sum += v[i][j];
					w = v[i][j];
					flag=1;
					break;
				}
			}
			if(flag==0)
				{
					sum = -1;
					break;
				}
		}
		cout<<sum<<endl;
	}
	return 0;
}