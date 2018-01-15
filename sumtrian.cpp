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
		int a[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=i;j++)
			cin>>a[i][j];
		}
		int s=0;
		int pos,max=0;
		for(int i=0;i<n;i++)
		{
			if(a[n-1][i]>max)
			{
				max=a[n-1][i];
				pos = i;
			}
		}
		s+=max;
		int x=n-2;
		while(x--)
		{
			if(a[x][pos]>=a[x][pos-1])
			{
				s+= a[x][pos];
			}
			else
			{
				s +=a[x][pos-1];
				pos = pos-1;
			}
		}
		cout<<s<<endl;
	}
}

