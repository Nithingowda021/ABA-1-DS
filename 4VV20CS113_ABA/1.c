#include<stdio.h>
#include<stdlib.h>
int i,j,c,m,k,flag=0;
char str[100],pat[20],rep[20],ans[100];
void stringmatch()
{
int i=m=c=j=0;
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
}
ans[j]=='\0';
}

void main()
{
printf("Enter main string:\n");
gets(str);
printf("Enter pattern string:\n");
gets(pat);
printf("Enter replace string:\n");
gets(rep);
stringmatch();
if(flag==1)
{
printf("the resultant string is \n %s",ans);
}
else
{
printf("string match NOT found");
}
return 0;
}



