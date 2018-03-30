#include<stdio.h>
void main()
{
    int n,result=1,r=0;
    scanf("%d",&n);
    while(n!='\0')
    {
        r=n%10;
        result=result*r;
        n=n/10;
    }
    printf("%d",result);
}
