#include<stdio.h>

int getmax(int arr[],int n)
{
int mx=arr[0],i;

for(i=1;i<n;i++)
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

int arr[10],n,i,max;
printf("Enter the size of the array\n");
scanf("%d",&n);
printf("Enter the array elements\n");


for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

max=getmax(arr,n);
printf("%d\n",max);
 
int exp;

for(exp=1;max/exp>0;exp=exp*10)

{

int output[n];
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
printf("%d\t",arr[i]);
}

printf("\n");
}

printf("\nThe sorted array is\n\n");

for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}

}
