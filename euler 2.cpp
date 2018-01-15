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
	int t;
	cin>>t;
	while(t--)
	{
		int limit;
		cin>>limit;
	    long long int ef1 = 0, ef2 = 2;
    	long long int sum = ef1 + ef2;
		 if (limit < 2)
        {
        	sum =0;
        	break;
		}
    while (ef2 <= limit)
    {
        long long int ef3 = 4*ef2 + ef1;
        if (ef3 > limit)
            break;
        ef1 = ef2;
        ef2 = ef3;
        sum += ef2;
    }
 	cout<<sum<<endl;
	}
	return 0;
}



