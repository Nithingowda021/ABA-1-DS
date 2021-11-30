#include<stdio.h>
void main()
{
	int i,j,a[50],key,count=0,n;
	printf("enter the no of elemets");
	scanf("%d",&n);
	printf("enter the array elements\n");
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
			j=j-1;
			
		}
		a[j+1]=key;
		count++;
	}
printf("sorted array is:");
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
printf("the no of swaps %d",count);
}
