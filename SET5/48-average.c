
#include <stdio.h>

int main()
{
    int i,n,a[100],sum =0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum+a[i];
    }
 
    avg = sum/n;
    printf(" %d",avg);
    
 
    
    return 0;
}



