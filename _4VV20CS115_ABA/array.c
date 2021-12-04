#include<stdio.h>
#include<stdlib.h>
void main()
{
int *arr,i,m,n;
printf("Enter the no of elements");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
if(arr==NULL)
{
printf("memory allocation is failed");
}
else
{
printf("Enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the additional m elements");
scanf("%d",&m);
arr=(int*)realloc(arr,m);
printf("Enter the additional array elements");
for(i=n;i<m+n;i++)
{
scanf("%d",&arr[i]);
}
printf("the array elements are");
for(i=0;i<n+m;i++)
{
printf("%d",arr[i]);
}
free(arr);
}
}
