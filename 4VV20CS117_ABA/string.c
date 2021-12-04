#include<stdio.h>
#include<stdlib.h>
char str[100],pat[50],rep[50],ans[100];
int i,j,k,c,m,flag=0;
void stringmatch()
{
i=j=m=c=0;
while(str[c]!='\0')
{
if(str[m]==pat[i])
{
m++,i++;
if(pat[i]=='\0')
{
flag=1;
for(k=0;rep[k]!='\0';k++,j++)
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
c++;
j++;
m=c;
}
}
ans[j]='\0';
}
void main()
{
printf("enter the main string:");
gets(str);
printf("enter the pattern string:");
gets(pat);
printf("enter the replacement string:");
gets(rep);
stringmatch();
if(flag==1)
{
printf("the resultant string is %s",ans);
}
else
{
printf("pattern string is not found");
}
}
