#include <stdio.h>
int main()
{
	int l,b,h,tsa,vol;
	scanf("%d %d %d",&l,&b,&h);
	vol=l*b*h;
	tsa=2*((l*b)+(b*h)+(h*l));
	printf("volume=%d\n",vol);
	printf("TSA=%d",tsa);
	return 0;
}
