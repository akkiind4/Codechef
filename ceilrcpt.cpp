#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[2][12];
		for(int i=0;i<12;i++)
		{
			a[0][i] = pow(2,i);
			a[1][i] = 0;
		}
		for(int i=11;i>=0;i--)
		{
			a[1][i] = n/a[0][i];
			if(a[1][i]>=1)
			n-=(a[0][i]*a[1][i]);
			if(n<=0)
			break;
		}
		int q=0;
		for(int i=0;i<12;i++)
		{
			q+=a[1][i];
		}
		cout<<q<<endl;
	}
	return 0;
}


