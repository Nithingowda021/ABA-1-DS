#include<stdio.h>
void main()
{
int a[100],i,j,key,n;
printf("enter the no.of elements");
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
while(j>=0 && a[j]>key)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=key;

}
printf("sorted array");
for(i=0;i<n;i++)
{
printf("%d %d",a[i]);
}
}

