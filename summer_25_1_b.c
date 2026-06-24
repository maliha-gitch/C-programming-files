#include<stdio.h>
int a, b;
void func2(int x, float y)
{
    printf("%d %f\n", x+5, y+6);
}
int func1(float x)
{
    b=b*a;
    printf("%f\n", x+3);
    func2(10, 6.5);
    return b-1;
}
void main()
{
    a=11;
    b=25;
    printf("%d %d\n", b, a);
    a=func1(9.5);
    func2(12, 20.0);
    printf("%d %d\n", a, b);
}
