#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <climits>
#include <cmath>
using namespace std;
#define ll long long
#define ck cout<<"check\n"
#define p(i) cout<<i<<"\n"
#define spc " "
#define wis(x) cerr << #x << " is " << x << endl
#define MOD 1000000007
#define mx(a,b) ( (a) > (b) ? (a) : (b))
#define mn(a,b) ( (a) < (b) ? (a) : (b))
#define test int test;cin>>test;while(test--)
#define f(i,L,R) for (int i = L; i < R; i++)
#define fe(i,L,R) for (int i = L; i <= R; i++)
#define ff(i,L,R) for (int i = L; i > R; i--)
#define ffe(i,L,R) for (int i = L; i >= R; i--)
#define mp(a,b) make_pair(a,b)
#define ain(a,i,n) f(j,i,n) cin>>a[j]
#define aout(a,i,n) f(j,i,n) cout<<a[j]<<" \n"[j==n-1]
#define cnl cout<<'\n'
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
#define fi first
#define se second
#define pb push_back
#define pf push_front
typedef unsigned long long ull;
int main()
{
	ios_base::sync_with_stdio(false);
   	cin.tie(NULL);
   	test
   	{
    	double k1,k2,k3,v;
    	cin>>k1>>k2>>k3>>v;
		double v2 = v*k1*k2*k3;
		double v3 = 100/v2;
		v3 = std::ceil(v3 * 100.0) / 100.0;
		if(v3<9.58)
			p("yes");
		else
			p("no");
		//cout <<  k1 << endl;*/
   	}
   	return 0;
}