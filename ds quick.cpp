/*    quick sort  */ 
#include<stdio.h>
#include<conio.h>
void quicksort(int a[20],int p,int r);
int main(){
	int a[20],i,p,q,n;
	 printf("enter no of element for sorting\n");
   scanf("%d",&n);
   printf("enter %d integer no\n",n);
   for(i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
   }
   quicksort(a,0,n-1);
    printf("quicksorted elements are\n");
     for(i=0;i<n;i++)
   {
   	printf("%d\t",a[i]);
   }
   getch();
   return 0;
}
void quicksort(int a[20],int p,int q)
{
	int i,j, pivot,temp;
	if (p<q)
	{
		pivot=p;
		i=p;
		j=q;
		while(i<j)
		{
			while(a[i]<=a[pivot]&&i<j)
			i++;
			while(a[j]>a[pivot])
			j--;
			if(i<j)
			{
				temp=a[pivot];
				a[pivot]=a[j];
				a[j]=temp;
			}
		}
			temp=a[pivot];
				a[pivot]=a[j];
				a[j]=temp;
			quicksort(a,p,j-1);
			quicksort(a,j+1,q);
	}
}
