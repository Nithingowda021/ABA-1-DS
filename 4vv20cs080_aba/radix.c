#include<stdio.h>
int getmax(int arr[],int p)
{
int max=arr[0],i;
for(i=1;i<p;i++)
	{
	if(arr[i]>max)
		{
		max=arr[i];
		}
	}
return max;
}
void main()
{
	int arr[4],n=4,i,m;
	printf("enter the arry elements");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	m=getmax(arr,n);
	int exp;
	for(exp=1;(m/exp)>0;exp*=10)
	{
		int output[n],count[10]={0};
	
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
		}printf("\n");

	}

}

















	
	
		
		

