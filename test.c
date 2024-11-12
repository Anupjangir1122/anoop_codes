#include <stdio.h>

int Odd(int num);
int Even(int num);

int main() {
    int num;

   
    printf("Enter an integer: ");
    scanf("%d", &num);

   
    if (Odd(num)) {
        printf("%d is an odd number.\n", num);
    } else {
        printf("%d is an even number.\n", num);
    }

    return 0;
}


int Odd(int num) {
    if (num == 0) {
        return 0; 
    } else {
        return Even(num - 1);
    }
}


int Even(int num) {
    if (num == 0) {
        return 1; 
    } else {
        return Odd(num-1);
        }
}