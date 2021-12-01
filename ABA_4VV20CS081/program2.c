#include<stdio.h>
#include<stdlib.h>
int arr[10],n,m;
int getmax(int arr[],int n)
{
int max=arr[0],i;
for(i=1;i<n;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
}
return max;
}
int main()
{
int i;
printf("Enter the size of the array\n");
scanf("%d",&n);
printf("Enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
 m=getmax(arr,n);
int exp;
for(exp=1;m/exp>0;exp*=10)
{
int output[10];
int count[10]={0};
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
output[count[(arr[i]/exp)%10]-1]=arr[i];
count[(arr[i]/exp)%10]--;
}
for(i=0;i<n;i++)
{
arr[i]=output[i];
}
printf("\nthe sorted array is \n");
for(i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
}
return 0;
}
