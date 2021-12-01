#include<stdio.h>
 int get_max(int arr[],int n)
{
int mx=arr[0];
for(int i=0;i<n;i++)
{
if(arr[i]>mx)
{
mx=arr[i];
}
}
return mx;
}
void main()
{
int i,n,arr[10],m;
int ouput[10];
int count[10]={0};
printf("Enter the size of array");
scanf("%d",&n);
printf("Enter the array elemnts");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
get_max(arr[10],n);
int exp;

for(exp=1;m/exp>0;exp*=10)
{

count[(arr[i]/exp)%10]++;
}
for(i=1;i<10;i++)
{
count[i]=count[i]+count[i-1];
}
for(i=n-1;i>=0;i--)
{
 int output[count[((arr[i]/exp)%10)-1]=arr[i];
count[(arr[i]/exp)%10]--;
}
printf("the sorted array is :");
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
} 

