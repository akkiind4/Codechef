#include <iostream>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fo(i,a,b)		for(int i=a;i<b;i++)
#define enter(a,n)			fo(i,0,n)cin>>a[i]
#define nl				cout<<'/n'
#define spc				cout<<" "
void f1(long long a[],int l,int r)
{
	for(int i=l;i<=r;i++)
		a[i]+=1;
}
void f2(ll a[],int l[],int r[],int k[],int f,int b)
{
	for(int i=f;i<=b;i++)
	{
		if(k[i]==1)
			f1(a,l[i],r[i]);
		else
			f2(a,l,r,k,l[i],r[i]);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n=0,m=0;
		cin>>n>>m;
		long long a[n]={0};
		int k[m+1]={0},l[m+1]={0},r[m+1]={0};
		for(int i=1;i<=m;i++)
		{
			cin>>k[i]>>l[i]>>r[i];
		}
		for(int i=1;i<=m;i++)
		{
			int w = l[i];
			int e = r[i];
			if(k[i]==1)
			{
				f1(a,w,e);
			}
			
			else
			{				
			f2(a,l,r,k,w,e);
			}
			
		}
		for(int i=1;i<=n;i++)
		{
			a[i] = a[i]%1000000007;
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}#include<iostream>
#include<conio.h>
using namespace std;

class Rational{
int num,den;
public:
    Rational();
    void add(Rational x,Rational y);
    void sub(Rational x,Rational y);
    void div(Rational x,Rational y);
    void validate(int a,int b);
};
Rational::Rational(){
int p,q,x;
cout<<"Enter 1 to input the Numerator and Denominator : "<<endl;
cout<<"Enter 2 to use default values :(1/1)"<<endl;
cin>>x;
if(x==1){
    cout<<"Enter the Numerator and Denominator : "<<endl;
    cin>>p>>q;
    Rational::num=p;
    Rational::den=q;
}
else  if(x==2){
    Rational::num=1;
    Rational::den=1;
}
else cout<<"Wrong Input";
}

void Rational::add(Rational x,Rational y){
Rational::num=x.num*y.den+y.num*x.den;
Rational::den=x.den*y.den;
cout<<"Sum of the numbers is: ";
validate(num,den);
}

void Rational::sub(Rational x,Rational y){
Rational::num=x.num*y.den-y.num*x.den;
Rational::den=x.den*y.den;
cout<<"Difference of these numbers is: ";
validate(num,den);
}

void Rational::div(Rational x,Rational y){
Rational::num=x.num*y.den;
Rational::den=x.den*y.num;
cout<<"The answer after division is: ";
validate(num,den);
}

void Rational::validate(int a,int b){
int c=min(a,b);
int i=2;
while(i<=c){
    if(a%i==0 && b%i==0){
        a=a/i;
        b=b/i;
    }
    else{
        i++;
    }
}
cout<<endl<<a<<"/"<<b<<endl;
}

class Result:public Rational{

};
int main(){
Rational obj1,obj2;
Result obj3;
obj3.add(obj1,obj2);
obj3.sub(obj1,obj2);
obj3.div(obj1,obj2);
}
