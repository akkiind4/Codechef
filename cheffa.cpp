#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	long long count;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[50];
		a[n+1]=-1;
		a[n]=-1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=n;i<50;i++)
		a[i]=-1;
		count = 0;
		for(int i=0;i<50;i++)
		{
			while(a[i]>0&&a[i+1]>0)
			{
				if(a[i]>0&&a[i+1]>0&&a[i+2]>=0)
				{
					a[i]-=1;
					a[i+1]-=1;
					a[i+2]+=1;
					count++;
				}
				if(a[i]>0&&a[i+1]>0&&a[i+2]==-1)
				{
					a[i]-=1;
					a[i+1]-=1;
					a[i+2]=1;
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
