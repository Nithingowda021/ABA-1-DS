#include<stdio.h>
int main()
{
int *a[10],r,c,i,j,count=0;
printf("Enter rows and columns:\n");
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
{
a[i]=(int*)malloc(sizeof(int));
}
printf("Enter elements:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j]==0)
{
count++;
}
}
}
if(count>(r*c)/2)
{
printf("Sparse");
}
else
{
printf("Not a sparse");
}
return 0;
}
