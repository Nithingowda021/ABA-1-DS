#include<stdio.h>
#include<stdlib.h>
char str[100],pat[50],rep[50],ans[100];
int i,j,l,m,k,flag=0;
void stringmatch()
{
while(str[c]!='\0')
{
if(str[m]==pat[i])
}
i++,m++;
if(pat[i]=='\0')
{
i++,m++;
if(pat[i]=='\0')
{
flag=1;
for(k=0;rep[k]!='\0';k++,j++)
ans[j]=rep[k];
i=0;
l=m;
}
}
else
{
ans[j]=str[c];
j++;
l++;
m=c;
}
}
ans[j]='\0';
}
void main()
{
printf("enter a main string\n");
gets(str);
printf("enter a pattern string\n");
gets(pat);
printf("enter a replace string\n");
gets(rep);
string match();
if (flag==1)
printf("the resultant string is\n%s",ans);
else
printf("pattern string not found\n");
}
