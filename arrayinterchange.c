//reversal ofb array using another array


#include <stdio.h>
int main()
{
    int marks[]={2,5,1,4,7,8,97,3};
    int anup[8];

    for( int i = 0; i<=7; i++)

    {
        anup[i]=marks[8-i-1];
    }
    for ( int i = 0; i <=7; i++)
    {printf("%d\n", anup[i]);
    }
    

    return 0;
   
        
}
//reversal of array using the same array

