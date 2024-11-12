#include <stdio.h>
int main()
{
    int n,m;

    printf("enter the number of n");
    scanf("%d",&n);
    printf("enter the number of m ");
    scanf("%d",&m);
    //***** ..... print n number of star 

    for (int j=1; j<=n; j++)
    {
         for ( int i = 1; i<=j; i++)
        printf("%d " , i);
        printf("\n");
    }
         
    return 0;
}