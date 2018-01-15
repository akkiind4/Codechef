#include<stdio.h>
#include<conio.h>
int quick(int*,int,int);
int main()
{
	int a[10],lower[100],upper[100];
	int beg,end,top,loc,i;
	printf("enter array element-\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	top=0;
	lower[top]=0;
	upper[top]=9;
	while(top>=0)
	{
		beg=lower[top];
		end=upper[top];
		top--;
		loc=quick(a,beg,end);
		if((loc-1)>beg)
		{
			top++;
			lower[top]=beg;
			upper[top]=(loc-1);
		}
		if((loc+1)<end)
		{
			top++;
			lower[top]=loc+1;
			upper[top]=end;
			
		}
		}
		for(i=0;i<10;i++)
		{
			printf("%d\t",a[i]);
		}
		getch();
}
int quick(int *p, int left ,int right)
{
	int loc=left,temp;
	while(1)
	{
		while(*(p+loc)<=*(p+right) &&loc!=right)
		{
			right=right-1;
		}
		if(loc==right)
		{
			return loc;
		}
		temp=*(p+right);
		*(p+right)=*(p+loc);
		*(p+loc)=temp;
		loc=right;
		while(*(p+loc)>=*(p+left) &&loc!=left)
		{
			left=left+1;
		}
		if(left==loc)
		{
			return loc;
		}
		temp=*(p+loc);
		*(p+loc)=*(p+left);
		*(p+left)=temp;
		loc=left;
		
		
	}
	
}
