#include<stdio.h>
int main()
{
int i,j;
char x,alphabet='A';
printf("enter the uppercase character you want to print in last row:s");
scanf("%c",&x);
 for(i=1; i<=(x-'A'+1); ++i)
{
for(j=1; j<=i; ++j)
{
printf("%c",alphabet);
}
++alphabet;
printf("\n");
}
return 0;
}