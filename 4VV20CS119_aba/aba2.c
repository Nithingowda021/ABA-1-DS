#include<stdio.h>
#include<stdlib.h>
void main()
{
int *arr,i,m,n;
printf("enter no of elements");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
if(arr==NULL)
{
printf("memory allocation failed");
}
else
{
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("array elements are:");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
printf("enter the additional elements");
scanf("%d",&m);
arr=(int*)realloc(arr,m);
printf("enter additional elements");
for(i=n;i<m+n;i++)
{
scanf("%d",&arr[i]);
}
printf("the elements are");
for(i=0;i<m+n;i++)
{
printf("%d",arr[i]);
}
}
}

