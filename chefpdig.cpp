#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l = s.length();
		int d[10][2];
		for(int i=0;i<10;i++)
		{
			d[i][0]=i;
			d[i][1]=0;
		}
		for(int i=0;i<l;i++)
		{
			int num = s[i]-'0';
			d[num][1]+=1;
		}
		if(d[6][1]>=1&&d[5][1]>=1)
		cout<<"A";
		if(d[6][1]>=2)
		cout<<"B";
		if(d[6][1]>=1&&d[7][1]>=1)
		cout<<"C";
		if(d[6][1]>=1&&d[8][1]>=1)
		cout<<"D";
		if(d[6][1]>=1&&d[9][1]>=1)
		cout<<"E";
		if(d[7][1]>=1&&d[0][1]>=1)
		cout<<"F";
		if(d[7][1]>=1&&d[1][1]>=1)
		cout<<"G";
		if(d[7][1]>=1&&d[2][1]>=1)
		cout<<"H";
		if(d[7][1]>=1&&d[3][1]>=1)
		cout<<"I";
		if(d[7][1]>=1&&d[4][1]>=1)
		cout<<"J";
		if(d[7][1]>=1&&d[5][1]>=1)
		cout<<"K";
		if(d[7][1]>=1&&d[6][1]>=1)
		cout<<"L";
		if(d[7][1]>=2)
		cout<<"M";
		if(d[7][1]>=1&&d[8][1]>=1)
		cout<<"N";
		if(d[7][1]>=1&&d[9][1]>=1)
		cout<<"O";
		if(d[8][1]>=1&&d[0][1]>=1)
		cout<<"P";
		if(d[8][1]>=1&&d[1][1]>=1)
		cout<<"Q";
		if(d[8][1]>=1&&d[2][1]>=1)
		cout<<"R";
		if(d[8][1]>=1&&d[3][1]>=1)
		cout<<"S";
		if(d[8][1]>=1&&d[4][1]>=1)
		cout<<"T";
		if(d[8][1]>=1&&d[5][1]>=1)
		cout<<"U";
		if(d[8][1]>=1&&d[6][1]>=1)
		cout<<"V";
		if(d[8][1]>=1&&d[7][1]>=1)
		cout<<"W";
		if(d[8][1]>=2)
		cout<<"X";
		if(d[8][1]>=1&&d[9][1]>=1)
		cout<<"Y";
		if(d[9][1]>=1&&d[0][1]>=1)
		cout<<"Z";
		cout<<endl;
	}
	return 0;
}
