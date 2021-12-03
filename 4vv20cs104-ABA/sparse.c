#include<stdio.h>
#include<stdio.h>
void main()
{
int r,c,i,j,count=0;
printf("enter the number of rows and columns of a matrix\n");
scanf("%d%d",&r,&c);
int  *arr[r];
for(i=0;i<r;i++)
{
arr[i]=(int*)malloc(c*sizeof(int));
}
printf("enter the elements of a matrix\n");
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
{
count++;
}
}
}
if(count>(r*c)/2)
{
printf("it is a sparse matrix\n");
}
else
{
printf("it is not a sparse matrix");
}
}
