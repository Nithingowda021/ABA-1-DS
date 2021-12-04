#include<stdio.h>
#include<stdlib.h>
char str[100],pat[50],rep[50],ans[100];
int i,j,m,c,k,flag=0;
void stringmatch()
{
i=m=j=c=0;
while(str[c]!='\0')
{
if(pat[i]==str[m])
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
printf("enter the main string\n");
gets(str);
printf("enter the pattern string\n");
gets(pat);
printf("enter the replace string\n");
gets(rep);
stringmatch();
if (flag==1)
printf("the string matched %s\n",ans);
else
printf("the string match not found\n");
}
				

