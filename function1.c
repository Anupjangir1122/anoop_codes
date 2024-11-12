#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b, c;
    a = 5;
    b = 654;
    c = sum(a, b);

    printf("the sum is %d", c);
    return 0;
}
