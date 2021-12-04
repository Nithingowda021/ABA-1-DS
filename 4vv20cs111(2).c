#include<stdio.h>
#include<stdlib.h>
void main()
{
int *arr,i,n,m;
printf("Enter then no. or array elements");
scanf("%d",&n);
arr=(int*)malloc(n*(sizeof(int)));
if(arr==NULL)
{
printf("The memory allocation failed");
}
else
{
printf("Enter the array elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("the array elemnts are");
for(i=0;i<n;i++)
{
printf("%d",&arr[i]);
}
printf("Enter the additional no. of elements");
scanf("%d",&m);
arr=(int*)realloc(arr,m);
printf("Enter the additional array elements: ");
for(i=n;i<m+n;i++)
{
scanf("%d",&arr[i]);
}
printf("The array elements are");
for(i=0;i<m+n;i++)
{
printf("%d",&arr[i])
}
free(arr);
}
