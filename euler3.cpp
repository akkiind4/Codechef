#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fo(i,a,b)		for(int i=a;i<b;i++)
#define enter(a,n)			fo(i,0,n)cin>>a[i]
#define nl				cout<<'/n'
#define spc				cout<<" "
int prime(int k)
{
	if(k%2==0||k%3==0)
	return 0;
	for(int i=6;i<k;i+=6)
	{
		if(i>sqrt(k))
		break;
		if(k%(i-1)==0||k%(i+1)==0)
		return 0;
	}
	return 1;
}
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
		ll p=0;
		int flag;
		for(int i=2;i<n;i++)
		{
			if(n%i==0)
			{
				flag = prime(i);
				if(flag==1&&i>p)
				p=i;
			}
		}
		cout<<p<<endl;
	}
	return 0;
}



