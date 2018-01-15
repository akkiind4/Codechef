#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll k,n;
		cin>>n>>k;
		ll a[n],v[2*n];
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			v[i] = a[i];
			v[i+n] = a[i];
		}
		ll max_so_far = a[0], max_ending_here = 0;
    	for (ll i = 0; i <n; i++)
    	{
       		max_ending_here = max_ending_here + a[i];
        	if (max_so_far < max_ending_here)
            	max_so_far = max_ending_here;
        	if (max_ending_here < 0)
            	max_ending_here = 0;
    	}
    	      //     cout<<"m1  "<<max_so_far<<endl;
    	ll max_so_far_2 = v[0], max_ending_here_2 = 0;
    	for (ll i = 0; i <2*n; i++)
    	{
       		max_ending_here_2 = max_ending_here_2 + v[i];
       		if (max_so_far_2 < max_ending_here_2)
            	max_so_far_2 = max_ending_here_2;
        	if (max_ending_here_2< 0)
            	max_ending_here_2 = 0;
    	}
    	    //       cout<<"m2  "<<max_so_far_2<<endl;
		if(k==1)
		{
			cout<<max_so_far<<endl;
			continue;
		}
		if(k==2)
		{	
    		cout<<max_so_far_2<<endl;
    		continue;
		}
		else if(k>2)
		{
			if(sum<=0)
			{
    			cout<<max_so_far_2<<endl;
    			continue;
			}
			else
			{
				int flag = 0;
				for (int i = 0; i < n; i++)
				{
					if(a[i]<0)
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					cout<<sum*k<<endl;
					continue;
				}
				else if(flag==1)
				{
					ll af[n],ab[n],x=0;
					for(ll i=0;i<n;i++)
					{
						x+=a[i];
						af[i] = x;
					}
					x=0;
					for(ll i=n-1;i>=0;i--)
					{
						x+=a[i];
						ab[i]=x;
					}
					ll imf=af[0],imb=ab[0];
					for (ll i = 0; i < n; ++i)
					{
						if(imf<af[i])
							imf = af[i];
						if(imb<ab[i])
							imb = ab[i];
					}
					cout<<(imf+imb+(sum*(k-2)))<<endl;
					continue;
				}
			}
		}
	}
	return 0;
}