#include <stdio.h>
int main()
{
	int n,m,gcd,lcm,i;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n&&i<=m;i++)
	{
	  if(n%i==0 && m%i==0)        
	  {
	      gcd=i;
	  }
	}
	lcm=(n*m)/gcd;
	printf("lcm of %d and %d is %d",n,m,lcm);
	return 0;
}
