/* program for string matching and replacement */

#include<stdio.h>
#include<stdlib.h>

char str[100],rep[50],pat[50],ans[100];
int i,j,m,c,k,flag=0;

void stringmatch()
{

i=j=m=c=0;

while(str[c]!='\0')
{
	if(str[m]==pat[i])
	{
		i++;
		m++;
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
	j++;
	c++;
	m=c;
	}
	
}
}

void main()
{
printf("Enter the main string\n");
gets(str);
 
printf("Enter the pattern string\n");
gets(pat);

printf("Enter the replacement string\n");
gets(rep);

stringmatch();

if(flag==1)
{
printf("The replaced string is %s \n",ans);
}

else{
printf("the pattern is not found\n");
}

}

