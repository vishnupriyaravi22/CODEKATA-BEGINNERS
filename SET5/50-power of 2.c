
#include <stdio.h>

int main()
{
    int n,flag=0;
    scanf("%d",&n);
    
    while(n>1)
    {
        if(n%2!=0)
        {
            
            flag = 1;
            break;
        }
        n=n/2;
    }
    
    if(flag==1)
    {
        printf("not a power of 2");
    }
    else
    {
        printf("power of 2");
    }
    return 0;
    }
