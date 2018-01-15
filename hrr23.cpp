#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fo(i,a,b)		for(int i=a;i<b;i++)
#define enter(a,n)			fo(i,0,n)cin>>a[i]
#define nl				cout<<'/n'
#define spc				cout<<" "
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int p,d,m,s,num=0,sum=0;
	cin>>p>>d>>m>>s;
	while(p>=m)
	{
		sum+=p;
		if(sum>s)
		break;
		else
		num++;
		p-=d;
	}
	p=m;
	while(sum<s)
	{
		sum+=p;
		if(sum>s)
		break;
		else
		num++;
	}
	cout<<num<<endl;
	return 0;
}



