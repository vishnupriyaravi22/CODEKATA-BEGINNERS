#include <stdio.h>
#include <string.h>

void append(char *s, char c)
{
        int len = strlen(s);
        s[len] = c;
        s[len+1] = '\0';
}

int main(void)
{
        char str[100];
	scanf("%s",str);
        char c = '.';

        append(str, c);

        printf("%s\n", str);
        return 0;
}
