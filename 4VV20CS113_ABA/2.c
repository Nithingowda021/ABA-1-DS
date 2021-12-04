#include<stdio.h>
#include<stdlib.h>
void main()
{
int *arr,m,n,i;
printf("enter the n of elements: ");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
if(arr==NULL)
printf("memory allocation failed");
else
{
printf("enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
}
printf("array elements are \n");
for(i=0;i<n;i++)
printf("|%d|",arr[i]);
printf("\nenter the no of additional elements ");
scanf("%d",&m);
arr=(int*)realloc(arr,m);
printf("enter the additional array elements:\n ");
for(i=n;i<m+n;i++)
scanf("%d",&arr[i]);
printf("the array elements after reallocation:\n");
for(i=0;i<m+n;i++)
printf("|%d|",arr[i]);
}
