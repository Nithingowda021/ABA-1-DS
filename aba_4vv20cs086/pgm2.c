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
int arr[10],i,z;
printf("Enter the size of the array:");
scanf("%d",&z);
printf("Enter the array elemnts:");
for(i=0;i<z;i++)
{
scanf("%d",&arr[i]);
}
int m=getmax(arr,z);
int exp;
for(exp=1;(m/exp)>0;exp*=10)
{
int output[4];
int count[10]={0};
for(i=0;i<z;i++)
{
count[(arr[i]/exp)%10]++;
}
for(i=1;i<10;i++)
{
count[i]=count[i-1]+count[i];
}
for(i=z-1;i>=0;i--)
{
output[count[(arr[i]/exp)%10]-1]=arr[i];
count[(arr[i]/exp)%10]--;
}
for(i=0;i<z;i++)
{
printf("%d\t",output[i]);
arr[i]=output[i];
}
}
printf("\n Sorted array elements are\n:");
for(i=0;i<z;i++)
{
printf("%d\t",arr[i]);
}
return 0;
}


