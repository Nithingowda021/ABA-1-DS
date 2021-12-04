#include<stdio.h>
#include<stdlib.h>
char str[100],pat[50],rep[50],ans[100];
int i,m,j,c,k,flag=0;
void stringmatch()
{
i=m=c=j=0;
while(str[c]!='\0')
{
if(str[m]==pat[i])
{
m++;i++;
if(pat[i]=='\0')
{
flag=1;
for(k=0;rep[k]!='\0';j++,k++)
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
printf("Enter a main string\n");
gets(str);
printf("Enter a pattern string\n");
gets(pat);
printf("Enter a replace string\n");
gets(rep);
stringmatch();
if(flag==1)
printf("The resultant string is %s\n",ans);
else
printf("The pattern string not found\n");
}

