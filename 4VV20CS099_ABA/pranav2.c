#include<stdio.h>
#include<stdlib.h>
void main()
{
int r,c,i,j,count=0;
printf("enter the no of rows and columns");
scanf("%d %d",&r,&c);
int *arr[r];
for(i=0;i<r;i++)
{
arr[i]=(int*)malloc(c*sizeof(int));
}
printf("enter the elements of the matrix");
for(i=0;i<r;i++);
{
for(j=0;j<c;j++);
{
scanf("%d",&arr[i][j]);
}
}
for(i=0;i<r;i++);
{
for(j=0;j<c;j++);
{
if(arr[i][j]==0)
count++;
}
}
if(count>((r*c)/2))
printf("\n sparse");
else
printf("\n not a sparse");
}
