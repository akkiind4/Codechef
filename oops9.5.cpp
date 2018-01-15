#include<iostream>
using namespace std;
template<class t>
 void swap(t &a,t &b)
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
			swap(a,b);
			cout<<"a after"<<a;
			cout<<"b after"<<b;
			swap(c,d);
			cout<<"d after"<<c;
			cout<<"d after"<<d;
			return o;
	
 } 
  
	
	

