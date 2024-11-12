#include <stdio.h>
int main()
{
    int n,m;

    printf("enter the number of row: n\n");
    scanf("%d",&n);
    printf("enter the number of column: m\n ");
    scanf("%d",&m);
    //***** ..... print n number of star 
     int a=1;
    for (int j=1; j<=n; j++)
    {   
         for ( int i = 1; i<=j; i++){
        printf("%d" , a);
        a = a + 2;
        }
        printf("\n");
    }
         
    return 0;
}