/*roman letter to integer*/
#include<stdio.h>
int main(void)
{
char roman[10];
int a[10],i,j,sum=0;
printf("Enter the roman letter\n");
gets(roman);
for(i=0;i<strlen(roman);i++)
{
switch(roman[i])
{
case 'I':a[i]=1;
	 break;
case 'V':a[i]=5;
	 break;
case 'X':a[i]=10;
	 break;
}
}
sum=a[strlen(roman)-1];
for(j=strlen(roman)-1;j>0;j--)
{
if(a[j]>a[j-1])
{
sum=sum-a[j-1];
}
else
{
sum=sum+a[j-1];
}
}
printf("sum:%d",sum);
return 0;
}
