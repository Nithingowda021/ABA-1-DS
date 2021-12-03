#include<stdio.h>
#include<stdlib.h>

int main()
{
	int r,c,count=0,j;
	printf("Enter the nuber of rows and column\n");
	scanf("%d%d",&r,&c);
	int i;
	int *arr[r];
	for(i=0;i<r;i++)
	{
			arr[i]=(int*)malloc(c*sizeof(int));
	
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
			
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			
			if(arr[i][j]==0)			
			count++;
		}
	}

	if((r*c)/2<count)
	printf("It is sparse\n");
	else
	printf("It is not sparse");
	return 0;
	
}
