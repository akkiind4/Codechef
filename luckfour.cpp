#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		int q,s=0;
		while(n)
		{
			q= n%10;
			if(q==4)
			s++;
			n/=10;
		}
		cout<<s<<endl;
	}
	return 0;
}


