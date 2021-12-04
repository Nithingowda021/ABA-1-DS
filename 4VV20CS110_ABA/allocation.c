#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *arr,i,n,m;
	printf("Enter the number of array elements: ");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	if(arr==NULL)
	{
		printf("The allocation failed");
	}
	else
	{
		printf("Enter the array elements: ");
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		printf("The array elements: ");
		for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
		printf("Enter the number of additional elements: ");
		scanf("%d",&m);
		arr=(int*)realloc(arr,m);
		printf("Enter the additional elemnets: ");
		for(i=n;i<n+m;i++)
		{
			scanf("%d",&arr[i]);
		}
		printf("Final array: ");
		for(i=0;i<n+m;i++)
		{
			printf("%d ",arr[i]);
		}
	}
}
