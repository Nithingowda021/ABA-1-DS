#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,r,c,count=0;
printf("enter the rows and cols");
scanf("%d %d",&r,&c);
int *arr[r];
for(i=0;i<r;i++)
{
arr[i]=(int*)malloc(c*sizeof(int));
}
printf("enter array elements\n");
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
if(count>(r*c)/2)
printf("its a sparse matrix\n");
else
printf("not a sparse matrix\n");
}
