
#include <stdio.h>

int main()
{
    char ch;

   
    printf("Enter any character: ");
    scanf("%c", &ch);


  
    if(ch >= '0' && ch <= '9')
    {
        printf("YES", ch);
    }
    else 
    {
        printf("No", ch);
    }

    return 0;
}

