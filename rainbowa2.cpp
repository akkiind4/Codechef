#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,n,t[100];
	cin >> a;
	while(a--)
	{
		cin >> n;
		for(int i=0;i<n;i++)
		cin >> t[i];
		int flag=0,j=n-1;
		if(t[n/2]!=7)
		flag=1;
		for(int i=0;i<n;i++,j--)
		{
			if(t[i]!=t[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		cout<<"no"<<endl;
		else
		cout<<"yes"<<endl;
	}
	return 0;
}
