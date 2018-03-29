#include <stdio.h>
int main() 
{
	int n,a,d,i,tot=0;
	scanf("%d %d %d",&a,&d,&n);
	
    for(i=0;i<n;i++)
    {
        tot=tot+(a+i*d);
    }
    printf("%d",sum);
	return 0;
}
