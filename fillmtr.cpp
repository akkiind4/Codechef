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
		int n,q;
		cin>>n>>q;
		int a[n][n]={NULL};
		int p,o,val;
		while(q--)
		{
			cin>>p>>o>>val;
			a[p][o]=val;
		}
		int flag=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=i;j++)
			{
				if(i==j&&a[i][j]!=0)
				{
					flag=1;
					cout<<"no";
					break;
				}
				else if(a[i][j]!=NULL&&a[j][i]!=NULL&&a[j][i]!=a[i][j])
				{
					flag=1;
					cout<<"no";
					break;
				}
				else if(a[i][j]!=NULL&&a[j][i]==NULL)
				a[j][i]=a[i][j];
			}
		}
		
		if(flag=0)
		cout<<"yes";
		cout<<endl;
	}
	return 0;
}



