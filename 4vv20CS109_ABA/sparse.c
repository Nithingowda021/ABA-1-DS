#include<stdio.h>
#include<stdlib.h>

void main()
{
	int row, col;
	printf("Enter the number of rows and columns\n");
	scanf("%d %d",&row,&col);
	int *arr[row];
	int i,j;
	for(i=0;i<row;i++)
	{
		arr[i]=(int *)malloc(col*sizeof(int));
	}
	printf("Enter the elements of the matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int count=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(arr[i][j]==0)
			{
				count++;
			}
		}
	}
	if(count>((row*col)/2))
	{
		printf("The matrix is sparse\n");
	}
	else
	{
		printf("The matrix is not sparse\n");
	}
}
		
		
		
		
		
		
		
