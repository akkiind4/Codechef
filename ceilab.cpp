#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b;
 cin>>a>>b;
 int c = a-b;
if (c==1)
	{c+=1;goto t;}
 else if(c>1&&c<=9)
 	{c-=1;goto t;}
 else if(c==10)
 	{c+=1;goto t;}
 else if(c>=11&&c<=99)
 	{c-=1;goto t;}
 else if(c==100)
 	{c+=1;goto t;}
 else if(c>=101&&c<=999)
 	{c-=1;goto t;}
 else if(c==1000)
 	{c+=1;goto t;}
 else if(c>=1001&&c<=9999)
 	{c-=1;goto t;}
 t:
 cout<<c<<endl;
}