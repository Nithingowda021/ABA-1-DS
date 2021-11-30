#include<stdio.h>
void main()
{
	int i,j,n,a[50],key;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the array element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
	key=a[i];
	j=i-1;
	while(j>=0 && a[i]>key)
	{
		a[j+1]=a[j];
		j=j-1;
	}
		a[j+1]=key;
	}
	
	printf("sorted array element\n");
		
	for(i=0;i<n;i++)
	{
	printf("%d",a[i]);
	}
		
	}
		
		
		
		
