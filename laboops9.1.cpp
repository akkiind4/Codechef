#include<iostream>
#include<fstream>
using namespace std;
class distance
{
	private:
	int d;
	public:
		int getvalue()
		{
			cout<<"enter the data want to be insertedin file\n";
			cin>>d;
			return d;
		}
}a;
int main()
{   int c=1;
	fstream file("distance.txt",ios::app);
	do
	{
		file<<a.getvalue()<<endl;
		cout<<"do u want to enter more data.enter 1 for yes and 0 for no\n";
		cin>>c;
		
	}while(c!=0);
	return 0;
}

