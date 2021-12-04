#include<stdio.h>
#include<stdlib.h>
void main()
{ int *arr,i,m,n,j;
printf("Enter the number of elements");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
printf("enter the array elements");
for(i=0;i<n;i++)
{ scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
printf("the elements are");
{
printf("%d",arr[i]);
}
printf("enter the additional m elements");
scanf("%d",&m);
arr=(int*)realloc(arr,m);
for(i=n;i<n+m;i++)
{
scanf("%d",&arr[i]);
}
printf("the resultant array are : \n");
for(i=0;i<n+m;i++)
{ printf("%d",arr[i]);
}
}
}
