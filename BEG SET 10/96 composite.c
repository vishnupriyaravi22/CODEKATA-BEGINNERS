#include <stdio.h>
int main() 
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
	return 0;
}
