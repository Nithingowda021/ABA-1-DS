#include<stdio.h>
#include<stdlib.h>
void main()
{
int *arr,i,r;
printf("enter the no of elements");
scanf("%d",&r);
arr=(int*)malloc(r*sizeof(int));
if(arr=NULL)
{
printf("memory allocation failed");
}
else
{
printf("the array elements arr");
for(i=0;i<r;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<r;i++)
{
printf("%d",arr[i]);
}
}
}
