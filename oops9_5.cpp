#include<iostream>
using namespace std;
template<class t>
 void swap1(t &a, t &b)
{
	t c;
	c=a;
	a=b;
	b=c;	
} 

int main()
{
	int a=29;
	int b=20;
	float c=23;
	float d=26;
	cout<<"a before"<<a;
	cout<<"b before"<<b;
		cout<<"c before"<<c;
			cout<<"d before"<<d;
			swap1(a,b);
			cout<<"a after"<<a;
			cout<<"b after"<<b;
			swap1(c,d);
			cout<<"d after"<<c;
			cout<<"d after"<<d;
			return 0;
	
 } 
  
	
	

