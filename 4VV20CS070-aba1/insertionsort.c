#include<stdio.h>
int n,i,j,key,a[100],count=0;
void main()
{
	printf("enter the no of elements: \n");
	scanf("%d",&n);
	printf("enter the array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;count++;
		}
		a[j+1]=key;
	}
	printf("no of swaps is:%d \n",count);
	printf("the sorted array is: \n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
