#include<stdio.h>
void func(int x);
int main()
{
    func(3);
    return 0;
}
void func(int x)
{
    if (x==0)
        return;
    printf("%d\n", x);
    func(x-1);
    printf("%d\n", x);
}
