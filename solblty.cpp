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
#define ck cout<<"check"<<endl
#define p(i) cout<<i<<endl
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
#define aout(a,i,n) f(j,i,n) cout<<a[j]<<endl<<[j==n-1]
#define cnl cout<<endl
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
    int x,a,b;
    cin>>x>>a>>b;
    long long p = (a +(100-x)*b)*10;
    p(p); 
  }
  return 0;
}
