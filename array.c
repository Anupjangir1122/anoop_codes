#include<stdio.h>
int main()
{
    int marks[i];
    int sum = 0;

    for (  int i=0; i<=4; i++)

    {
        
        printf("enter the number of marks is %d\n" , i);
        scanf("%d" , &marks[i]);
         sum= sum + marks[i];
    }
    
   printf("the average of student number is %d\n" , sum/5);
    return 0;
}