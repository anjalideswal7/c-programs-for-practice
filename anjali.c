#include<stdio.h>
int main()
{
    int a,b,row;
    printf(enter no of row);
    scanf("%d",&row);
    for(i=row; i>=1; --i);
    {
        for(j=1; j>=i; ++j);
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}
