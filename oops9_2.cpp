#include<iostream>
using namespace std;
template <class T>
T average(T ar[],int n)
{
	T s=0;
	for(int i=0;i<n;i++)
	  {
	  	s=s+ar[i];
	  }
	  s=s/n;
	  return s;
}
int main()
{
int ar1[]={1,2,3,4,5};
float ar2[]={1.1,2.2,3.3,4.4};
int av1=average(ar1,5);
float av2=average(ar2,4);
cout<<"The avg of integer array is="<<av1;
cout<<"The avg of float array is="<<av2;
return 0;
}
