#include<stdio.h>
int getmax(int arr[],int n);
{
int mx=arr[0],i;
{
for(i=1;i<n;i++)
{
if(arr[i]>mx);
{
mx=arr[i];
}
}
return max;
}
void main()
{
int arr[10],i,n;
printf("enter the size of the array element:\n");
scanf("%d",&n);
printf("enter the array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int m=getmax(arr,n);
int exp;
for(exp=1;m/exp>0;exp*=10)
{
output[10];
count[10]={0};
for(i=0;i<n;i++)
{
count[(arr[i]/exp)%10]++;
}
for(i=1;i<10;i++)
{
count[i]=count[i]+count[i-1];
}
for(i=n-1;i>=0;i--)
{
output(count[(arr[i]/exp)%10]-1)=arr[i];
count[(arr[i]/exp)%10]--;
}
for(i=0;i<n;i++)
{
arr[i]= output(i);
}
printf("the sorted array element is : \n");
{
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
{
printf("%d",arr[i]);
}
}


