#include<stdio.h>
int getmax(int arr[],int n);
{
mx=arr[0]i;
for(i=1;i<n;i++)
{
if(mx<arr[i])
{
arr[i]=mx;
}
}
return mx;
}
void main() 
{
int arr[10],i,n,m;
printf("enter number of elements:");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
}
m= getmax(arr[10],n);
exp;
for(exp=1;(m/exp)>0;exp*=1)
{
int output[10];
int count[10]={0};
count=[(arr[i]/exp)%10]
if(i=0;i<n;i++);
{
count[(arr[i]/exp)%10]++;
}
for(i=1;i<10;i++)
{
count[i]=count[i]+count[i-1];
}
for(i=n-1;i>=0;i--)
{
output=[count((arr[i]/exp)%10)-1]=arr[i];
count[(arr[i]/exp)%10]--;
}
{
for(i=0;i<n;i++);
output= arr[i];
}
{
printf("sorted list is:");
{
for(i=0;i<n;i++)
printf("%d\n",&arr[i]);
}
}
return 0;
}
