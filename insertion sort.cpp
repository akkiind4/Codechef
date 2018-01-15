/*    insertion sort*/
#include<stdio.h>
int main()
{
	int a[100],i,n,j,temp;
	printf("enter no of element u wnat to arrange\n");
	scanf("%d",&n);
	printf("enter %d integer value\n",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		j=i;
		while(j>0 && a[j]<a[j-1])
	{
		temp=a[j];
		a[j]=a[j-1];
		a[j-1]=temp;
		j--;
	}
	}
	printf("sorted array is:\n");
	for(i=0;i<n;i++)
     {
	   printf("%d\n",a[i]);	
      }
	  return 0;
}
