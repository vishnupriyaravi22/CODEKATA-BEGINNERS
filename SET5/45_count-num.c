#include <stdio.h>
int main()
{
    long long n;
    int c = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++c;
    }

    printf("%d", c);
}

