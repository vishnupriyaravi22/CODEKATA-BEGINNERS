#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        printf("%d",n);
    }
    return 0;
}
    
