#include<stdio.h>
#include<stdlib.h>

char str[100],pat[50],rep[50],ans[100];
int k,i,j,m,c,flag=0;

void stringmatch()
{
	i=j=k=m=c=0;
	while(str[c]!='\0')
	{	
		if(str[m]==pat[i])
		{
			i++,m++;
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
				j++,c++;
				m=c;
		}
	
	}
	ans[j]='\0';
}

void main()
{
	printf("Enter the main string\n");
	gets(str);
	printf("Enter the pattern to be replaced\n");
	gets(pat);
	printf("Eter the replacing string/pattern\n");
	gets(rep);
	stringmatch();
	if(flag==1)
	printf("The string is ==== %s",ans);
        else
	printf("not found");

}
