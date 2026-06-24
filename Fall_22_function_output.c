#include<stdio.h>
int a=0,b=0, c=0;///c=24
int func1(int p)
{
    c=p+a;
    return c;
}
int func3(int c)
{
    c = 2;///local variable
    a *=2; /// 12 24
    return c*a;
}
void func2(int x, int b)///12 24
{
    x *= 2;///x=24
    b = func3(x);
}
void main()
{
    a = 2121 % 47;//6
    func3(a);
    printf("%d %d %d \n",a,b,c); ///12 0 0
    b = func1(a);
    printf("%d %d %d \n",a,b,c);///12 24 24
    func2(a,b);
    printf("%d %d %d \n",a,b,c);///24 24 24
}
