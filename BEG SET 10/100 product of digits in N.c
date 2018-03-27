#include<stdio.h>
void main()
{
    int n,res=1,r=0;
    scanf("%d",&n);
    while(n!='\0')
    {
        r=n%10;
        res=res*r;
        n=n/10;
    }
    printf("%d",res);
}
