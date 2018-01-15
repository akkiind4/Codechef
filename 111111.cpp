#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int b=6;
	cout<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<a<<" "<<b<<endl;
	return 0;
}
void swap(int x,int y){
	int temp=x;
	x=y;
	y=temp;
	
}
