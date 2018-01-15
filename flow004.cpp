#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long q;
		cin>>q;
		int p,w;
		w=q%10;
		while(q)
		{
			p=q%10;
			q/=10;
		}
		w+=p;
		cout<<w<<endl;
	}
	return 0;
}


