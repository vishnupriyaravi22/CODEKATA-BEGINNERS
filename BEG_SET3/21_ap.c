#include <stdio.h>
#include <math.h>
 
int main()
{
     int N,A,D, i, tn;
     int sum = 0;
 
     
     scanf("%d", &N);
     
     
     scanf("%d", &A);

     
     scanf("%d", &D);
     sum = (N * (2 * A + (N - 1)* D ))/ 2;
     tn = A + (N - 1) * D;
     
     for (i = A; i <= tn; i = i + D)
     {
          if (i != tn)
               printf("%d + ", i);
          else
               printf("%d = %d ", i, sum);
     }
     return 0;
}
