#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,d;
	cin>>t;
	while(t--)
	{
		long long avg,need,q=0,count=0;
		cin>>n>>d;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			q+=a[i];
		}
		int flag=0;
		if(q%n==0)
		{
			avg=q/n;
			for(int i=0;i<=(n-d);i++)
			{
				if(a[i]>avg)
				{
					need = a[i]-avg;
					a[i]-=need;
					a[i+d]+=need;
					count += need;
				}
				else if(a[i]<avg)
				{
					need = avg-a[i];
					a[i]+=need;
					a[i+d]-=need;
					count+= need;
				}
			}
			for(int i=0;i<n;i++)
			{
				if(a[i]!=avg)
				{
				count = -1;
				break;
			}
			}
		}
		else
		count = -1;
		cout<<count<<endl;
	}
	return 0;
}
