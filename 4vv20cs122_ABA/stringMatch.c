#include<stdio.h>
#include<stdlib.h>

char str[100],pat[50],rep[50],ans[100];
int m,i,k,j,c,flag=0;

void str_match()
{
m=i=c=j=0;
while(str[c]!='\0')
{
if(str[m]==pat[i])
{
m++;
i++;
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
j++;
c++;
m=c;
}
ans[j]='\0';
}
}

void main()
{
printf("Enter the main string: ");
gets(str);
printf("Enter the pattern string: ");
gets(pat);
printf("Enter the replace string: ");
gets(rep);
str_match();
if(flag==1)
{
printf("The resultant string is %s: ",ans);
}
else
{
printf("Pattern not found");
}
}
