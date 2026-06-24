#include<stdio.h>
int x = 6, y = 8;
int func (int a, int b)
{
    a *= 2;
    printf("a = %d, b = %d.\n", a, b);
    return (--a) * (b--);
}
int sub (int a, int b)
{
    b /= 6;
    printf("a = %d, b = %d.\n", a, b);
    return (--a) * (--b);
}
int main()
{
    y = func(x, y);
    printf("x = %d, y = %d.\n", x, y);
    x = sub(x, y);
    printf("x = %d, y = %d.\n", x, y);
    return 0;
}
