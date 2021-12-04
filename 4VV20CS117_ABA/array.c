#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,n;
int *a,m;
printf("enter the number of elements n:");
scanf("%d",&n);
a=(int *)malloc(n*sizeof(int));
if(a == NULL)
{
printf("Memory allocation failed");
}
else
{
printf("enter the array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("|%d|",a[i]);
}
printf("\nenter the additional m elements:");
scanf("%d",&m);
a=(int*)realloc(a,m);
for(i=n;i<n+m;i++)
{
scanf("%d",&a[i]);
}
printf("the final array obtained is:");
for(i=0;i<m+n;i++)
{
printf("|%d|",a[i]);
}

}
}
