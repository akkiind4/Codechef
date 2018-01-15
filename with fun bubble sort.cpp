/*  bubble sort using function    */
#include<stdio.h>
void bubble_sort(int a[],int);
int main()
{   
    int n,a[100],i;
	printf("enter the no of element u want to sort\n");
	scanf("%d",& n);
	printf("enter %d inter value\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble_sort(a,n);
	printf("sorted array in ascending order is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void bubble_sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
