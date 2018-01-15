#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while(!cin.eof())
	{
		string s;
		int l= s.length();
		int gd=0;
		int nta=5,ntb=5;
		for(int i=0;i<10;i++)
		{
			char c = s[i];
			int n;
			if(c=='1')
			n=1;
			else
			n=0;
			if(i/2==0)
			{
				nta--;
				if(n==1)
					gd++;
				if(gd>ntb)
					cout<<"TEAM-A "<<(i+1)<<endl;
			}	
			else
			{
				ntb--;
				if(n==1)
					gd--;
				if(abs(gd)>nta)
					cout<<"TEAM-B "<<(i+1)<<endl;
			}
		}
	}
	return 0;
}