#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,si,ti,t,l,lead=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>si>>ti;
		l = max(si,ti)-min(si,ti);
		if(lead<=l)
		{
			lead=l;
			if(si>ti)
			t=1;
			else
			t==2;
		}
	}
	cout<<t<<" "<<lead<<endl;
}
