#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,n,key,a[50],count=0;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter the array elements \n");
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
	j--;count++;
}
	printf("the array elements %d \n",count++);
	for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
}
