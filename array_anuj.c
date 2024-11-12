#include<stdio.h>
int main()
{   int temp;
    int a[]={1,2,3,4,5};
    for (int i = 0; i < 5/2; i++)
    {
        temp=a[i];
        a[i]=a[5-1-i];
        a[5-i-1]=temp;
    }
    
    printf("The reverse of the array is\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d",a[i]);
    }
    
    return 0;
}
