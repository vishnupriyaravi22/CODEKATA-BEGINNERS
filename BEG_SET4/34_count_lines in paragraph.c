
#include <stdio.h>

int main()
{
    int count=0;
    char str[100];
    scanf(" %[^\n]", str);
    for (int i = 0;str[i] != '\0';i++)
    {
        if (str[i] == '.')
            count++;    
    }
    printf("%d\n", count+1);

    return 0;
}
