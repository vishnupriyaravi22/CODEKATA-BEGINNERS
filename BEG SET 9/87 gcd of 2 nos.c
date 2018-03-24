#include <stdio.h>
int main()
{
	int n1,n2,gcd,k;
	scanf("%d %d",&n1,&n2);
	for(k=1;k<=n1&&k<=n2;k++)
	{
	  if(n1%k==0 && n2%k==0)     
	  {
	      gcd=k;
	  }
	}
	printf("gcd of %d and %d is %d",n1,n2,gcd);
	return 0;
}
