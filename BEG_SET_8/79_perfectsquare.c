#include<stdio.h>
int main()
{
int n1,n2,pro,flag=0;
scanf("%d %d",&n1,&n2);
pro=n1*n2;
 for(int i=1;i<=pro/2;i++)
	{
		if

(i*i==pro)
		{
			

flag=1;
			

break;
		}
	
	}
	
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
