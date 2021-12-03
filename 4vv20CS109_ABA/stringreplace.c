#include<stdio.h>
#include<stdlib.h>

int c=0,m=0,i=0,j=0,k=0;
char str[100], pat[50], rep[50], ans[100];

void stringreplace()
{
	while(str[c]!='\0')
	{
		if(str[m]==pat[i])
		{
			m++;i++;
			if(pat[i]=='\0')
			{
				for(j=0;rep[j]!='\0';j++,k++)
				{
					ans[k]=rep[j];
				}
				i=0;
			}
			c=m;
		}
		else
		{
			ans[k]=str[c];
			c++;k++;
			m=c;
		}
	}
	ans[k]='\0';
}

void main()
{
	printf("Enter the main string\n");
	gets(str);
	printf("Enter the pattern string\n");
	gets(pat);
	printf("Enter the replace string\n");
	gets(rep);
	stringreplace();
	printf("The resultant string after replacing is: %s",ans);
}
	









	
