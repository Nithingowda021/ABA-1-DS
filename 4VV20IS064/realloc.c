#include<stdio.h>
#include<stdlib.h>
void main()
{
int *arr,i,m,n;
printf("enter the number of array elements\n");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
if(arr==NULL)
{
printf("memory allocation failed");
}
else
{
printf("enter array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
}
printf("enter additional m elements\n");
scanf("%d",&m);
arr=(int*)realloc(arr,m);
printf("enter m elements\n");
for(i=n;i<m+n;i++)
{
scanf("%d",&arr[i]);
}
printf("the array elements are \n");
for(i=0;i<m+n;i++)
{
printf(" %d ",arr[i]);
}
}
