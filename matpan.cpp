#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int pr[26];
		char a[26];
		int f[26];
		int p=0;
		for(int i=97;i<=122;i++)
		{
			a[p] = (char)i;
			f[p++]=0;
		}
		for(int i=0;i<26;i++)
			cin>>pr[i];
		string s;
		cin>>s;
		int l= s.length();
		for(int i=0;i<l;i++)
		{
			char c = s[i];
			int k = (int)c-97;
			f[k]=1;
		}
		int o=0;
		for(int i=0;i<26;i++)
		{
			if(f[i]==0)
			o+=pr[i];
		}
		cout<<o<<endl;
	}
	return 0;
}


