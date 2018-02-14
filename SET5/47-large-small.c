
#include <stdio.h>

int main()
{
    int i,n,a[100],large,small;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 large=small=a[0];
    for(i=1;i<n;++i)
    {
        if(a[i]>large)
            large=a[i];
        if(a[i]<small)
            small=a[i];
    }
    
    printf("The largest element is %d",large);
    printf("\nThe smallest element is %d",small);
 
    
    return 0;
}



