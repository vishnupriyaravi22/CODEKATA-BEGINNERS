#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100000];
	scanf("%s",ch);
	int len =strlen(ch);
	for(int i=(len-1);i>=0;--i)
	
	printf("%c",ch[i]);	
	
return 0;
}

