#include<stdio.h>
#include<string.h>
char str[100],pat[50],rep[50],ans[100];
int m,c,i,k,j,flag=0;
void stringmatch()
{
while(str[c]!='\0')
{
if(str[m]==pat[i])
{
m++,i++;
if(pat[i]=='\0')
{
flag=1;
for(k=0;rep[k]!='\0';k++,j++)
{
ans[j]=rep[k];
}
i=0,c=m;
}

}

else
{
ans[j]=str[c];
c++,j++;
m=c;
}
}
ans[j]='\0';
}

void main()
{
printf("Enter main string:");
gets(str);
printf("Enter pattern string:");
gets(pat);
printf("Enter replace string:");
gets(rep);
stringmatch();
if(flag==1)
printf("The resultant string is\n %s",ans);
else
printf("The pattern is not found");
}
