#include<stdio.h>
#include<stdlib.h>
char str[100],pat[50],rep[50],ans[100];
int i,j,m,c,k,flag=0;
void stringmatch()
{
i=m=c=j=0;
while(str[c]!='\0')
{
if(str[m]==pat[i])
{
i++,m++;
if(pat[i]=='\0')
{
flag=1;
for(k=0;rep[k]!=0;k++,j++)
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
printf("enter the main string");
gets(str);
printf("enter the pattern string");
gets(pat);
printf("enter the replace string");
gets(rep);

stringmatch();
if(flag==1)
printf("the resultant string is\n %s",ans);
else
printf("no match found");
}	 

