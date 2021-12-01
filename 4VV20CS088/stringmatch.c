#include<stdio.h>
#include<stdlib.h>
char str[100],pat[50],rep[50],ans[100];
int i,j,c,m,k,flag=0;
void stringmatch()
{

while(str[c]!='\0')
{
i=m=c=j=0;
if(str[m]==pat[i])
{
i++;
m++;
if(pat[i]=='\0')
{
flag=1;
for(k=0,rep[k]!='\0';k++;j++)
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

ans[j]='\0';
}

}
void main()
{
printf("Enter the string\n");
gets(str);
printf("Enter the pattern\n");
gets(pat);
printf("Enter the replace string\n");
gets(rep);
stringmatch();
if(flag==1)
{

printf("the resultant string is %s",ans);
}

else
{
printf("pattern is not found");

}
}


