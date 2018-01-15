#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
	string s;
	while(getline(cin,s))
	{
		int gd=0,nca=5,ncb=5,flag=0;
		for(int i=0;i<10;i++)
		{
			if(i%2==0)
			{
				nca--;
				if(s[i]=='1')
					gd++;
			}
			else
			{
				ncb--;
				if(s[i]=='1')
					gd--;
			}
			if(gd>ncb&&gd>0)
				{
					cout<<"TEAM-A "<<(i+1)<<endl;
					flag=1;
					break;
				}
			else if(abs(gd)>nca&&gd<0)
				{
					cout<<"TEAM-B "<<(i+1)<<endl;
					flag=1;
					break;
				}
			//cout<<"gd "<<gd<<"flag "<<flag<<endl;
		}
		if(flag==0)
		{
			for(int i=10;i<20;i+=2)
			{
				if(s[i]==s[i+1])
					continue;
				else
				{
					if(s[i]=='1')
						{
							cout<<"TEAM-A "<<(i+2)<<endl;
							flag=1;
							break;
						}
					else
						{
							cout<<"TEAM-B "<<(i+1)<<endl;
							flag=1;
							break;
						}
				}
			//	cout<<"gd "<<gd<<"flag "<<flag<<endl;
			}
		}
		if(flag==0)
			cout<<"TIE"<<endl;
		getline(cin,s);
	}
	return 0;
}