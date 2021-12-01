#include<stdio.h>
#include<stdlib.h>
char str[100],rep[50],ans[100],pat[50];
int i,j,k,c,m,flag=0;
void stringm()

{
i=j=c=k=m=0;
while(str[c]!='\0')
	{
	if(str[m]==pat[i])
		{
		i++;
		m++;
		if(pat[i]=='\0')
			{
			flag=1;
			for(k=0;rep[k]!='\0';j++,k++)
				{
				ans[j]=rep[k];
				}
				c=m;
				i=0;
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
{
printf("enter the string:");
gets(str);
printf("enter the pattern string:");
gets(pat);
printf("enter the replace string:");
gets(rep);
stringm();
if(flag==1)
{
printf("the output string is %s",ans);

}
else
{
printf("pattern not found");

}
}


















