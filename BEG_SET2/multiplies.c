#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter an integer: ");
    scanf("%d",&n);

    for(i=1; i <= 5; ++i)
    {
        printf(" %d",n*i);
    }

    return 0;
}
