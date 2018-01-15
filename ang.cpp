#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,k,q,ang;
		cin>>k>>a>>b;
		if(k%2==0)
		{
			if(abs(a-b)==k/2)
			q=0;
		}
		else
		{
			ang=360/k;
			q= ang*(abs(a-b));
			if(q>180)
			q = 360-q;
			q=q/ang;
			
		}
		cout<<q<<endl;
	}
	return 0;
}


