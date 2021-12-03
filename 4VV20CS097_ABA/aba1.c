#include<stdio.h>
int stringmatch();
char str[100],pat[50],rep[50],ans[100];
int m,c,i,j,k,flag;

int stringmatch()
{
m=c=i=k=flag=0;
while(str[c]!='\0')
{
if(str[m]==pat[i])
{
m++;
i++;
if(pat[i]=='\0')
{
flag=1;
for(j=0;rep[j]!='\0';j++,k++)
{
ans[k]=rep[j];
i=0;
c=m;
}
}
}
else
{
ans[k]=str[c];
k++;
c++;
m=c;
}
}
ans[k]=='\0';
return flag;
}

int main()
{
int a;
printf("Enter string:\n");
gets(str);
printf("Enter pattern:\n");
gets(pat);
printf("Enter replace:\n");
gets(rep);
a=stringmatch();
if(a==1)
{
printf("Match found\n");
puts(ans);
}
else
{
printf("Not found");
}
return 0;
}













