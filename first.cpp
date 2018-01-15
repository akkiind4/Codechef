#include<iostream>
using namespace std;
int pf(int q)
{
	int flag=0;
	for(int k=1;k<=q/2;k++)
	{
		if(k*k==q)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
int main()
{
	int a,b,c;
	int count=0;
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			c=i*i+j;
			count += pf(c);
		}
	}
	cout<<count<<endl;
	return 0;
}
