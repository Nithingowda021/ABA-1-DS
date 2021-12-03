#include<stdio.h>
#include<stdlib.h>
char str[100],rep[50],pat[50],ans[100];
int i,j,k,m,c,flag=0;
void stringmatch()
{
int i=j=m=c=0;
while(str[c]!='\0')
{
if(str[m]==pat[i])
{
i++;
m++;
if(pat[i]=='\0')
{
flag=1;
for(k=0;rep[k]!='\0';k++,j++)
ans[j]=rep[k];
i=0;
c=m;
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
ans[j]='\0';
}
void main()
{
printf("enter the required string\n");
gets(str);
printf("enter the patter string\n");
gets(pat);
printf("enter the replacement string\n");
gets(rep);
stringmatch();
if(flag==1)
{
printf("the string=%s",ans);
}
else
{
printf("the pattern not found\n");
}
}
