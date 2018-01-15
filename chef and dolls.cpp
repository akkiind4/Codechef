#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,p;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		b[i]=count(a,a+n,a[i]);
		for(int i=0;i<n;i++)
		if(b[i]%2!=0)
		cout<<a[i]<<endl;
	}
	return 0;
	
}

