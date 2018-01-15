#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--){
	    int t,sum=0;
	    cin>>t;
	    int a[t];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    sum+=a[i];}
	    for(int i=0;i<n;i++){
	    sum+=a[i];}int b;
	    b=sum%2;
	    if(b==0){
	        cout<<2<<endl;
	    }
	    else{
	        cout<<1<<endl;
	    }
	}
	return 0;
}


