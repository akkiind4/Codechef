#include<iostream>
using namespace std;
class exc
{

		int x,y;
		public:
		class oflow{
		};
		class uflow	{
		};
		maths(int a,int b)
		{
			int x=a;
			int y=b;
			if(x>32767||y>(32767-x))
			throw oflow();
			if(x<(-32768)||y,(-32768-x))
			throw uflow();
			
		}
		int plus()
		{
				if((x+y)>32767)
			throw oflow();
			if((x+y)<(-32768))
			throw uflow();
			return(x+y);
		}
		int sub()
		{
			if(x-y>32767)
			throw oflow();
			if((x-y)<(-32768))
			throw uflow();
			return(x-y);
			
		}
		float div()
		{
			if((x/y)>32767)
			throw oflow();
			if((x/y)<(-32768))
			throw uflow();
			return(x/y);
		}
		int mul()
		{
				if(x*y>32767)
			throw oflow();
			if((x*y)<(-32768))
			throw uflow();
			return(x*y);
		}
		
};
int main()
{
	try{
	      exc e(67,888888);
		int d;
		d=e.plus();
		{
			cout<<"sum="<<d<<endl;	
		}
		catch(exception::uflow)
		{
			cout<<"value underflow"<<endl;
				}		
					catch(exception::oflow)
		{
			cout<<"value overflow"<<endl;
				}		
				return 0;
				
	}
}
