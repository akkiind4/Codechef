#include<bits/stdc++.h>
using namespace std;
int pali(string s,int l)
{
	l--;
	for(int i=0;i<l;i++)
	{
		if(s[i]!=s[l])
		return 0;
		l--;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,ss;
		cin>>s;
		int len=s.length();
		int len2,flag2,flag=0;
		if(len<=1)
		{
			cout<<"NO";
			continue;
		}
		for(int i=0;i<len;i++)
		{
			for(int j=i+2;j<len;j++)
			{
				ss = s.substr(i,j);
				len2 = ss.length();
				flag2=pali(ss,len2);
				if (flag2==1)
				{
					i=len;
					break;
				}
			}
		}
		if(flag2==0)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
	return 0;
}
