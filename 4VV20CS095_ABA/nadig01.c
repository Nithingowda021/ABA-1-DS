#include<stdio.h>
#include<stdlib.h>
void main()
{
int r,c,i,j,*arr[r],count=0;
printf("enter the no of rows and cols :");
scanf("%d %d",&r,&c);
for(i=0;i<r;i++)
{
arr[i]=(int*)malloc(c*sizeof(int));
}
printf("enter the elements of matrix");
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
if(count>((r*c)/2))
printf("\n sparse");
else
printf("\n not sparse");
}
