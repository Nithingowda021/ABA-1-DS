#include<stdio.h>
#include<stdlib.h>
char str[100],pat[50],rep[50],ans[100];
int c,i,j,k,m,flag=0;
void string_match()
{
 c=m=i=j=k=0;
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
{
 ans[j]=rep[k];
}
c=m;
i=0;
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
 printf("enter the main string\n");
gets(str);
printf("enter the pattern\n");
gets(pat);
printf("enter the replaced string\n");
gets(rep);
string_match();
if(flag==1)
{
 printf("pattern found and result is %s",ans);
}
else
{
 printf("pattern not found");
}
}



