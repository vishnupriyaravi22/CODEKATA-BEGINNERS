#include <stdio.h>
int main() 
{	
   int n,m,i;
   char c;
   for(i=0;i<4;i++)
   {
       scanf("%d %c %d",&n,&c,&m);
       if(c=='/')
       {
           printf("%d\n",(n/m));
       }
       else
       {
           printf("%d\n",(n%m));
       }
   }
	return 0;
}
