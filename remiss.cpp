#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b;
		if(a>b)
		c=a;
		else
		c=b;
		d = a+b;
		cout<<c<<" "<<d<<endl;
	}
	return 0;
}


