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
		ll x,n;
		cin>>x>>n;
		ll sum = (n*(n+1))/2;
		sum -=x;
		if(sum%2!=0||n<=3)
		{
			cout<<"impossible"<<endl;
			continue;
		}
		ll a[n+1];
		ll s2=0;
		for (ll i = 1; i <= n; i++)
		{
			a[i]=1;
		}
		a[x]=2;
		ll half=sum/2;
		for (ll i = n;i>0;i--)
		{
			if(i==x)
			{
				continue;
			}
			else if(s2+i==half)
			{
				a[i]=0;
				break;
			}
			else if(s2+i<half)
			{
				if((half-s2)==(i+x))
				{
					continue;
				}
				s2+=i;
				a[i]=0;
				continue;
			}
			else if(s2+i>half)
			{
				continue;
			}
		}
		for (ll i = 1; i <= n; i++)
		{
			cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}