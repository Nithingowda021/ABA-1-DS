#include<stdio.h>
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
int arr[10],i,n;
printf("enter the number of elements \n");
scanf("%d",&n);
printf("enter the array elements \n");
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
}
for(i=1;i<n;i++)
{
count[(arr[i]/exp)%10]++;
}
for(i=1;1<10;i++)
{
count[i]=count[i]+count[i-1];
}
for(i=n-1;i>=0;i--)
{
output[count(arr[i]/exp%10)-1]=arr[i];
count(arr[i]/exp%10)--;
}
for(i=0;i<n;i++)
{
printf("%d\t",output[i]);
arr[i]=output[i];
{
printf("the sorted array is \n");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
return 0;
}
