#include<stdio.h>
#include<stdlib.h>
void main()
{
 int r,c;
printf("enter the number of rows and coloumns\n");
scanf("%d %d",&r,&c);
int *arr[r];
int i,j;
for(i=0;i<r;i++)
{
 arr[i]=(int *)malloc(c*sizeof(int));
}
printf("enter the elements of matrix\n");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
 scanf("%d",&arr[i][j]);
}
}
int count=0;
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
if(count>(r*c/2))
{
 printf("matrix is sparse");
}
else
{
 printf("matrix is not sparse");
}
}
