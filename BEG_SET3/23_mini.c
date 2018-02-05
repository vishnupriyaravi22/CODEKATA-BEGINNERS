

#include <stdio.h>
 
int main() 
{
    int a[5], minimum,c;
 

 
    for ( c = 0 ; c < 5 ; c++ )
        scanf("%d", &a[c]);
 
   
 
    for ( c = 0 ; c < 5 ; c++ ) 
    {
        if ( a[c] < minimum ) 
        {
           minimum = a[c];
          
        }
    } 
 
    printf("%d", minimum);
    return 0;
}
