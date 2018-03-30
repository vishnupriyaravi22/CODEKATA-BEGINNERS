#include <stdio.h>
#include<math.h>
int main()
{
	float p,r,s;
	int n,res;
	scanf("%f %d %f",&p,&n,&r);
	s=((p*n*r)/100);
	res=floor(s);
	printf("%d",res);
	return 0;
}
