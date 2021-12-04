#include<stdio.h>
#include<stdlib.h>

void main()
{
int n,*arr,i,m;
printf("Enter the number of elements: ");
scanf("%d",&n);
arr = (int*)malloc(n*sizeof(int));
if(arr==NULL)
{
printf("Memory allocation failed");
}
else
{
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Array elements are: ");
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
printf("\nEnter the number of additional elements: ");
scanf("%d",&m);
arr = (int*)realloc(arr,m);
printf("Enter the additional elements: ");
for(i=n;i<m+n;i++)
{
scanf("%d",&arr[i]);
}
printf("Array elements are: ");
for(i=0;i<m+n;i++)
{
printf("%d ",arr[i]);
}
}
}
