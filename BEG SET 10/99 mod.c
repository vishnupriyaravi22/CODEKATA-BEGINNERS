#include <stdio.h>
int main()
{
	int a,b,c,res=0;
	scanf("%d %d %d",&a,&b,&c);
	res=(a*b)%c;
	printf("%d",res);
	return 0;
}
