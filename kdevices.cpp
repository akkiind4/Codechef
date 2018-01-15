#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int x[n],y[n];
	for(int i=0;i<n;i++)
	cin>>x[i];
	for(int i=0;i<n;i++)
	cin>>y[i];
	int r[n];
	for(int i=0;i<n;i++)
	r[i] = ceil(sqrt((x[i]*x[i])+(y[i]*y[i])));
	sort(r,r+n);
	cout<<r[k-1];
	return 0;
}


