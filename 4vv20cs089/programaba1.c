#include<stdio.h>
#include<stdlib.h>
char str[100],pat[50],rep[50],ans[100];
int i,m,j,c,k,flag=0;
void string_match()
{
i=m=j=c=0;
while(str[c]!='\0')
{
if(str[m]==pat[i])
{
i++;m++;
if(pat[i]=='\0')
{
flag=1;
for(k=0;rep[k]!='\0';k++,j++)
{
ans[j]=rep[k];
}
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
ans[j]='\0';
}
}
void main()
{
printf("enter the main string:\n");
gets(str);
printf("enter the pattern string:'\n");
gets(pat);
printf("enter the replace string :\n");
gets(rep);
string_match();
if(flag==1)
printf("the resultant string is %s", ans);
else
printf("the pattern not found");
}

