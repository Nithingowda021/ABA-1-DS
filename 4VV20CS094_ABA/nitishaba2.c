#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,r,c,*arr[r],count=0;
printf("\nEnter the number of rows and columns");
scanf("%d %d",&r,&c);
for(i=0;i<r;i++)
{
arr[i]=(int*)malloc(c*sizeof(int));
}
printf("\nEnter the matrix elements");
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
printf("\nSparse matrix");
else
printf("\nNot a sparse matrix");
}
