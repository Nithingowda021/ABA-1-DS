#include<stdio.h>
#include<stdlib.h>
int i,j,key,n,count=0,a[50];
void main()
{
printf("ENter the no of elements in the array\n");
scanf("%d",&n);
printf(" enter the array elements");
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
a[j+1]= a[j];
j=j-1;
count++;
}
a[j+1]=key;
}


printf("the new sorted array is");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("the number swaps is %d",count);
}

