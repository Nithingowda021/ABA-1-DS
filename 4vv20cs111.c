#include<stdio.h>
#include<stdlib.h>
int i,j,k,c,m,flag=0;
char str[100],pat[50],rep[50],ans[100];
void stringmatch()
{
i=j=k=m=c=0;
while(str[c]!='\0')
{
if(str[m]==pat[i])
{
i++;m++;
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
printf("enter the pattrn string\n");
gets(pat);
printf("enter the replace string\n");
gets(rep);
stringmatch();
if(flag==1)
printf("the resultent string is \n%s",ans);
else
printf("pattern not found");
}
