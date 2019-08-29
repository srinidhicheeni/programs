#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,a[20],k,min,n;
	printf("enter the number of ele\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-2;i++)
	{
		min=i;
		for(j=i+1;j<=n-1;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		k=a[i];
		a[i]=a[min];
		a[min]=k;
	}
	printf("The sorted is:");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
