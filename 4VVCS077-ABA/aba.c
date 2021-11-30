#include<stdio.h>
void main()
{
int i,j,key,a[50],r;
printf("enter the number of array elements\n");
scanf("%d",&r);
printf("enetr the array elements");
for(i=0;i<r;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<r;i++)
{
key=a[i];
j=i-1;
while(j>=0 &&a[j]>key)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=key;
}
printf("sorted array elements is:\n");
for(i=0;i<r;i++)
{
printf("%d",a[i]);
}
}

