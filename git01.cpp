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
		int n,m;
		cin>>n>>m;
		int cost=0;
		while(n--)
		{

			string s;
			cin>>s;
			for (int i = 0; i < (m-1); i++)
			{
				if(s[i]==s[i+1])
				{
					if(s[i]=='G')
						cost+=3;
					else
						cost+=5;
					i++;
				}
			}
		}
		cout<<cost<<endl;
	}
	return 0;
}