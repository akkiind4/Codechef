#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char stack[400];
		int top=0;
		string s;
		cin>>s;
		stack[top]='(';
		int l = s.length();
		for(int i=0;i<l;i++)
		{
			char c = s[i];
			if(c=='(')
			{
				top++;
				stack[top] = c;
			}
			else if(c==')')
			{
				while(stack[top]!='(')
				{
					cout<<stack[top];
					top--;
				}
				top--;
			}
			else if(c=='^')
			{
				top++;
				stack[top] = c;
			}
			else if(c=='+'||c=='-')
			
		}
	}
	return 0;
}


