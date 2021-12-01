#include<stdio.h>
int getmax(int arr[],int n)
{
int mx=arr[0],i;
for(i=1;i<n;i++)
{
if(mx>arr[i])
{
mx=arr[i];
}
}
return mx;
}
int main()
{
int arr[4],i,n;
printf("Enter the size of the array: ");
scanf("%d",&n);
printf("Enter the elements of the array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int m=getmax(arr,n);
int exp;
for(exp=1;m/exp>0;exp*=10)
{
int output[4];
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
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
printf("\n");
}
return 0;
}
