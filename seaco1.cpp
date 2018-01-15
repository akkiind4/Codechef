#include <iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fo(i,a,b)		for(int i=a;i<b;i++)
#define enter(a,n)			fo(i,0,n)cin>>a[i]
#define nl				cout<<'/n'
#define spc				cout<<" "
void f1(long long a[],int l,int r)
{
	for(int i=l;i<=r;i++)
		a[i]+=1;
}
void f2(long long a[],int l[],int r[],int k[],int f,int b)
{
	for(int i=f;i<=b;i++)
	{
		if(k[i]==1)
			f1(a,l[i],r[i]);
		else
			f2(a,l,r,k,l[i],r[i]);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n=0,m=0;
		cin>>n>>m;
		long long a[n]={0};
		int k[m+1]={0},l[m+1]={0},r[m+1]={0};
		for(int i=1;i<=m;i++)
		{
			cin>>k[i]>>l[i]>>r[i];
		}
		for(int i=1;i<=m;i++)
		{
			int w = l[i];
			int e = r[i];
			if(k[i]==1)
			{
				f1(a,w,e);
			}
			
			else
			{				
			f2(a,l,r,k,w,e);
			}
			
		}
		for(int i=1;i<=n;i++)
		{
			a[i] = a[i]%1000000007;
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
