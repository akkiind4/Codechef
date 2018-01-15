#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,v1,v2;
		cin>>n>>v1>>v2;
		double te= (2*n)*1.0/v2;
		double ts = (1.0*sqrt(2)*n)/v1;
		cout<<te<<" "<<ts;
	
		if(te>=ts)
		cout<<"Stairs"<<endl;
		else
		cout<<"Elevator"<<endl;
	}
	return 0;
}


