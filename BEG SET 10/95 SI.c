#include <stdio.h>
#include<math.h>
int main()
{
	float p,r,si;
	int n,res;
	scanf("%f %d %f",&p,&n,&r);
	si=((p*n*r)/100);
	res=floor(si);
	printf("%d",res);
	return 0;
}
