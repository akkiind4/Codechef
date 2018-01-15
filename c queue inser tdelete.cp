#include<stdio.h>
#include<conio.h>
int insertcqueue(int *,int ,int,int);
//int deletecqueue(*int,int,int,int);
int main()
{
	int a[10],rear,front,n,i,p;

	
		printf("enter integer value  1.insertion,2. deletion");
	scanf("%d",&p);
	while(p)
	{
		case 1:insertcqueue(a,rear,front,data);
		//case 2:deletecqueue(a,rear,front,data);
		
	}
	
getch();
}
int insertcqueue(int *p,int rear,int front,int data)
{
	if(front==1 && rear==1||front==rear+1)
	printf("overflow");
	if( front==null)
	front=1;
	rear=1;
	else if(rear=n)	
	rear=1;
	else
	rear=rear+1;
	a[rear]=data;
}
