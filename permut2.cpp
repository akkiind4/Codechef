#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,flag=0;
		cin>>n;
		int a[n+1];
		a[0]=0;
		b[0]=0;
		for(int i=1;i<n+1;i++)
		cin>>a[i];
		for(int i=1;i<n+1;i++)
		{
			if(i!=a[a[i]])
			flag=1;
		}
		if(flag==1)
		cout<<"ambiguous"<<endl;
		else
		cout<<"not ambiguous"<<endl;
}
	return 0;
}


