#include<stdio.h>
#include<stdlib.h>
void main()
{
int *arr,n,m,i;
printf("Enter the number of elements \n");
scanf("%d",&n);
arr=(int*)malloc(n*(sizeof(int)));
if(arr==NULL)
{
printf("Memory allocation failed \n");
}
else
{
printf("Enter the array elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("The array elements are \n");
for(i=0;i<n;i++)
{
printf("|%d|",arr[i]);
}
printf("Enter the number of additional elements \n");
scanf("%d",&m);
arr=(int*)realloc(arr,m);
printf("Enter the additional array elements: \n");
for(i=n;i<m+n;i++)
{
scanf("%d",&arr[i]);
}

printf("Array elements are \n");
for(i=0;i<m+n;i++)
{
printf("|%d|",arr[i]);
}
}
}




