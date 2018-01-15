#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,t;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++)
		{
			a[i] = i;
		}
		if(n%2==0){
		for(int i=1;i<=n;i+=2)
		{
			swap(a[i],a[i+1]);
		}
		}
		else{
			for(int i=1;i<=n-1;i+=2)
		{
			swap(a[i],a[i+1]);
		}
		swap(a[n-1],a[n]);
		}
		for(int i=1;i<=n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
