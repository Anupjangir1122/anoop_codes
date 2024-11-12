#include<stdio.h>
int main()
{ int rem ,n, rev = 0;
printf("Enter the number you want to check palindrome or not\n");
scanf("%d",&n);
int a=n;
while (n!=0)
{
        rem = n%10;
        rev = rev*10+rem;
        n = n/10;
}
 if (a==rev)
 {
   printf("The number is palindrome because it is 121 like num\n");
 }
 else {
    printf("The number is NOT palindrome because it is not 121 like num\n");
 }
}

