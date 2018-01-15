#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j,a[100],n,temp;
	printf("enter no of element u want to sort\n");
	scanf("%d",&n);
	printf("enter %d integer value\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
		}		
	}
	   printf("sorted array is:\n");
	   for(i=0;i<n;i++)
	   printf("%d\n",a[i]);
	   getch();
	   return 0;
}
