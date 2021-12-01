#include<stdio.h>
#include<stdlib.h>
char str[100],pat[50],rep[50],ans[100];
int c,m,i,k,j,flag=0;
void stringmatch()
{
i=c=m=j=0;
while(str[c]!='\0')
{
if(str[m]==pat[i])
{
m++; i++;
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
j++; c++;
m=c;
}
ans[j]='\0';
}
}
void main()
{
printf("Enter a main string: ");
gets(str);
printf("Enter a pattern string: ");
gets(pat);
printf("Enter a replace string: ");
gets(rep);
stringmatch();
if(flag==1)
{
printf("String match successful, string is %s\n",ans);
}
else
{
printf("Pattern string NOT found");
}
}

