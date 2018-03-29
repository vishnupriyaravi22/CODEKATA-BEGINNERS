#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int len,i;
scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
	    if(i==0)
	    {
	    s[0]=toupper(s[0]);
	    }
	    if(s[i]==' ')
	    {
	    s[i+1]=toupper(s[i+1]);
	    }
	    
	}
	printf("%s",s);
	return(0);	
}
