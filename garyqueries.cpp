#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	int t[n];
	for(int i=0;i<n;i++)
	cin>>t[i];
	while(q--)
	{
		int a,b,c;
		long long s=0;
		cin>>a;
		if(a==1)
		{
			cin>>b>>c;
			t[b+1]=c;
		}
		else if(a==2)
		{
		cin>>b;
		for(int i=0;i<n;i++)
		s+= floor(t[i]/b);
		}
		if(a==2)
		cout<<s<<endl;
	}
	return 0;
}


