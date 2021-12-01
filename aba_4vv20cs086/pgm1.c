#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char str[100],pat[50],rep[50],ans[100];
int c,m,i,k,j,flag=0;
void string_match()
{
	i=j=c=m=k=0;
	while(str[c]!='\0')
	{
		if(str[m]==pat[i])
		{
			m++;i++;
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
			c++;j++;
			m=c;
		}
	}
	ans[j]='\0';
}
void main()
{
	printf("enter main string: \n");
	gets(str);
	printf("enter the pattern string: \n");
	gets(pat);
	printf("enter the replace string: \n");
	gets(rep);
	string_match();
	if(flag==1)
	{
		printf("the resultant string is \n %s",ans);
	}
	else
	{
		printf("pattern string not found");
	}
}				
