#include<stdio.h>
void main()
{
int a[50],i,j,n,key;
printf("enter the no of array elements");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
key=a[i];
j=i-1;
while(j>=0&&a[j]>key)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=key;
}
printf("the sorted array is ");
for(i=0;i<n;i++)
{
printf("%d",a[i]);

}
printf("the no of swaps is");
printf("%d",n-1);
}


