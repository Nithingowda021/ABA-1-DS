#include<stdio.h>
void main()
{
int i,j,n,a[50],key,count=0;
printf("Enter the number of elements in array");
scanf("%d",&n);
printf("Enter array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
key=a[i];
j=i-1;
while(j>=0 && a[j]>key)
{
a[j+1]=a[j];
j=j-1;
count++;
}
a[j+1]=key;
}
printf("The sorted array is :");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("The number of swaps are %d",count);
}
