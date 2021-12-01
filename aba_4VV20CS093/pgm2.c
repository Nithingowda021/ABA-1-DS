#include<stdio.h>
int getmax(int arr[],int n)
{
int i,mx=arr[0];
for(i=1;i<n;i++)
{
if(arr[i]>mx)
{
mx=arr[i];
}
}
return mx;
}
int main()
{
int arr[4],i,n;
printf("enter the size of array:");
scanf("%d",&n);
printf ("enter the array element:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int m=getmax(arr,n);
int exp;
for(exp=1;m/exp>0;exp*=10)
{
int output [4];
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
printf("%d\t",output[i]);
arr[i]=output[i];
}

printf("\n sorted array element \n");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
}
return 0;
}


