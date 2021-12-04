#include<stdio.h>
#include<stdlib.h>
char str[100],pat[50],rep[50],ans[100];
int c,m,i,j,k,flag=0;
void stringmatch()
{
c=m=i=j=0;
while(str[c]!='\0')
{
if(str[m]==pat[i])
{
m++,i++;
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
c++;
j++;
m=c;
}
}
ans[j]='\0';
}
void main()
{
printf("Enter the main string:\n ");
gets(str);
printf("Enter the pattern string :\n");
gets(pat);
printf("Enter the replacement string :\n");
gets(rep);
stringmatch();
if(flag==1)
{
printf("Pattern matching string: %s\n",ans);

}
else
{
printf("Pattern matching was not found");
}
}
