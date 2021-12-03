#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j,m,n,count=0;
printf("enter the order of the matrix");
scanf("%d %d",&m,&n);
int *arr[m];
for(i=0;i<m;i++)
{
arr[i]=(int*)malloc(n*sizeof(int));
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&arr[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
arr[i][j]==0;
count++;
}
}
if(count>((m*n)/2))
printf("sparce matrix");
else
printf("not asparce matrix");
}
