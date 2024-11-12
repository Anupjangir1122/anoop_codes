// DIGITAL ROOT - - - -add dem numbresoos till u get a single digit answer //

#include <stdio.h>
int main()
{
    int n, rem, res = 0,q , num ;
    printf("enter your number");
    scanf("%d", &n);
    q = n;

    while (n != 0)
    {
        rem = q % 10;
        res = res + rem;
        n = q / 10;
    }

    if (res == num)
    { 
        printf("the digital root is %d", num);
    }
    else
    {
        printf("null");
    }
}