#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int ms[n],os[m],mj[m];
		char q[n][m];
		for(int i=0;i<n;i++)
		cin>>ms[i];
		for(int i=0;i<m;i++)
		cin>>os[i]>>mj[i];
		for(int i=0;i<n;i++)
		{
			for(int k=0;k<m;++k)
			cin>>q[i][k];
		}
		long long cn=0,ts=0,nco=0,maxsal,p;
		int count[m]={0};
		for(int i=0;i<n;i++)
		{
			 maxsal=-1,p=-1;
			for(int j =0;j<m;j++)
			{
				if(q[i][j]=='1' && os[j]>=ms[i] && mj[j]>0)
				{
					if(os[j]>maxsal)
					{
					maxsal=os[j];
					p=j;	
				//	cout<<"maxsal"<<maxsal<<" ";
					}
				}
			}
			if(maxsal!=-1)
			{
				ts+=maxsal;
				cn++;
				count[p]=1;
				mj[p]--;
			}
		}
		for(int i=0;i<m;i++)
		{
			if(count[i]==0)
			nco++;
		}
	cout<<cn<<" "<<ts<<" "<<nco<<endl;
	}
	return 0;
}
