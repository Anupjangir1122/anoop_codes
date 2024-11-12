#include<stdio.h>
int main()
{
    int arr[8], n ,max = 0;   printf("enter the element in array");
    scanf("%d" , &n);
    for (int i = 0; i <=7; i++)
    {
        //printf("the array is%d" , arr[i]);
        scanf("%d" , &arr[i]);
    }
    for ( int  i = 0; i <=7; i++)
    {
        if (max<arr[i])
        {
         max=arr[i];            
        }
        
    }
    printf("largest no is %d\n" , max);
    return 0;
}