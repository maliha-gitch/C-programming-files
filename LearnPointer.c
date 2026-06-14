#include <stdio.h>

int main() {
    int x = 10;
    int *p;

    p = &x;

    printf("x = %d\n", x);
    printf("Address of x = %p\n", &x);
    printf("p = %p\n", p);
    printf("Value using pointer = %d\n", *p);

    return 0;
}
/*
x = 10
Address of x = 000000811B3FFCA4
p = 000000811B3FFCA4
Value using pointer = 10
*/
