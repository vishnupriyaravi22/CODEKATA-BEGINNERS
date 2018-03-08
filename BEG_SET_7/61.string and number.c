#include<stdio.h>
int main()
{
char s[100];
scanf("%s",s);
int k;
scanf("%d",&k);

for(int i=0;i<k;i++)
{
printf("%c",s[i]);
}
return 0;
}
