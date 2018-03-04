
#include <stdio.h>
#include <stdlib.h>
int main()
{
int Minutes;
scanf("%d",&Minutes);
if ( (Minutes / 60) == 1 ) 
printf("%01d hour",Minutes/60);
else 
printf("%01d hours",Minutes/60);

if ( (Minutes % 60) == 1) 
printf(" %01d minute\n",Minutes%60);
else 
printf(" %01d minutes\n",Minutes%60);

return 0;
}
