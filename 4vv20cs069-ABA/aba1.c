#include<stdio.h>
#include<stdlib.h>
char ans[100],str[100],pat[50],rep[50];
int i,j,m,n,k,c,flag=0;
void stringmatch()
{
	i=j=m=n=c=k=0;
while(str[c]!='\0')
{
		if(pat[i]==str[m])
{
		i++;m++;
}
		if(pat[i]='\0')
{
		flag=1;
		for(k=0;rep[k]!='\0';k++,j++)
{
		ans[j]=rep[m];
		i=0;
		c=m;
}
}
else
{
	ans[j]=str[c];
	c++;j++;
	c=m;
}
	ans[j]=='\0';
}
void main()
{
		printf("enter a main string\n");
		gets(str);
		printf("enter a pattern string\n");
		gets(pat);
		printf("enter a replace string\n");
		gets(rep);
		stringmatch();
	if(flag==1)
	{
		printf("the result string \n %s",ans);
	}
	else
	{
		printf("pattern not found");
	}
	
}

