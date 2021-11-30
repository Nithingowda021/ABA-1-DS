#include<stdio.h>
#include<stdlib.h>
char str[100],rep[50],pat[50],ans[100];
int i,j,k,c,m,flag=0;
void stringmatch()
{
i=c=m=j=0;
while(str[c]!='\0')
{
if(str[m]==pat[i])
{
i++;
m++;
if(str[m]==pat[i])
{
flag=0;
for(k=0;rep[k]='\0';k++,j++)
{
ans[j]=rep[k];
i=0;
c=m;
}
}
}
else
{
ans[j]=str[c];
j++;
c++;
m=c;
}
}
void main()
{
printf("enter main string");
gets(str);
printf("enter pattern string");
gets(pat);
stringmatch();
if(flag==1)

printf("the ans string is %s\n",ans);

else

printf("pattern not found");

}






