#include<stdio.h>
#include<stdlib.h>
void main()
{
int*arr,i,n,m;
printf("Enter the no. of elemnts");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
if(arr==NULL)
{
printf("Memory alloction failed");
}
else
{
printf("Enter array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Array elments are");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
printf("The new allocted memory");
scanf("%d",&m);
arr=(int*)realloc(arr,m);
printf("new elements");
for(i=n;i<n+m;i++)
{
scanf("%d",&arr[i]);
}
printf("New array elemts are");
for(i=0;i<n+m;i++)
{
printf("%d",arr[i]);
}
}
}
