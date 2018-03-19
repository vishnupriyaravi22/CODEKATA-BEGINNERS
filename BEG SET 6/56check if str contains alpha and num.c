#include <stdio.h>
#include<string.h>
int main() 
{
	char s[20];
	int n,i,flag;
	printf("enter the string:");
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
		{
			flag=1;
		}
		else if(s[i]>='0' && s[i]<='9')
		{
			flag=2;
		}
		else
		{
			flag=0;
		}

	}
	if(flag==1 && flag==2)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}

	return 0;
}
