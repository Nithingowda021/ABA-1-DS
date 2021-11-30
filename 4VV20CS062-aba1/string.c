#include<stdio.h>
#include<stdlib.h>
char str[100],pat[50],rep[50],ans[100];
int i,j,k,m,c,flag=0;
void stringmatch()
{
	i=j=m=c=0;
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
				}
				i=0;
				c=m;
			}
		}
		else
		{
			str[c]=ans[j];
			c++;j++;
			m=c;
		}
	}
	ans[j]='\0';
}
void main()
{
	printf("enter the string:\n");
	gets(str);
	printf("enter the pattern:\n");
	gets(pat);
	printf("enter the replacement string:\n");
	gets(rep);
	stringmatch();
	if(flag=1)
	printf("the resultant matrix is\n %s",ans);
	else
	printf("pattern not found");
}
























