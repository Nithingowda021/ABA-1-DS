#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,m,i,*arr;
printf("enter the no. of element:");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
if(arr==NULL)
{
printf("memory allocation failed");
}
else
{
printf("enter the array element:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("array elements are:");
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
printf("\n enter the new no. elements:");
scanf("%d",&m);
arr=(int*)realloc(arr,m);
printf("enter the new array elements:");
for(i=n;i<m+n;i++)
{
scanf("%d",&arr[i]);
}
printf("new array elements are:");
for(i=0;i<m+n;i++)
{
printf("%d ",arr[i]);
}
}
}

