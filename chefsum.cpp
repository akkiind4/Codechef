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
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int min = a[0];
		int pos = 0;
		for(int i=0;i<n;i++)
		{
			if(a[i]<min)
			{
				min = a[i];
				pos = i;
			}
		}
		cout<<pos+1<<endl;
	}
	return 0;
}
