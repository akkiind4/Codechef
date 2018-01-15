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
		int m,n;
		cin>>m>>n;
		int job[m+1]={0};
		for (int i = 0; i < n; ++i)
		{
			int q;
			cin>>q;
			job[q]=1;
		}
		int un[m-n],l=0;
		for(int i=1;i<=m;i++)
		{
			if(job[i]==0)
				{un[l]=i;l++;}
		}
		for(int i=0;i<(m-n);i+=2)
			cout<<un[i]<<" ";
		cout<<endl;
				for(int i=1;i<(m-n);i+=2)
			cout<<un[i]<<" ";
		cout<<endl;
	}
	return 0;
}