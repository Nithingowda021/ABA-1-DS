#include<stdio.h>
#include<stdlib.h>
void main()
{
int *arr,i,n,m;
printf("enter the no  of elements");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
if(arr==NULL)
{
printf("memory allocation failed");
}
else
{
printf("enter the array alements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the additional m elements");
scanf("%d",&m);
arr=(int*)realloc(arr,m);
printf("enter the additional array elements");
for(i=n;i<m+n;i++)
{
scanf("%d",&arr[i]);
}
printf("the array elements are");
for(i=0; i<m+n; i++)
{
printf("%d",arr[i]);
}
}
}
