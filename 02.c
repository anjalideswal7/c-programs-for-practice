#include<stdio.h>
int main()
{
int i,j,row;
printf("enter no of row:");
scanf("%d",&row);
for(i=1; i<=row; ++i)
{
for(j=1; j<=i; ++j)
{
printf("%i");
}
printf("\n");
}
return 0;
}
