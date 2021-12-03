#include<stdio.h>
#include<stdlib.h>
char str[100],pat[50], rep[50], ans[100];
int i,m,c,j,k,flag=0;
void stringmatch()
{
i=j=c=m=0;
while(str[c]!='\0')
{
if(str[m]==pat[i])
{
i++;
m++;
if(pat[i]=='\0')
{flag=1;
for(k=0;rep[k]!='\0';k++,j++)
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
{printf("\nEnter a main string\t");
gets(str);
printf("Enter the pattern string\t");
gets(pat);
printf("ENter the replace string\t");
gets(rep);
stringmatch();
if(flag==1)
printf("The resultant string is \t%s\n",ans);
else
printf("The string pattern is NOT found");
}

