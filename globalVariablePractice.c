#include <stdio.h>
int x;
void f1 (void)
{
    x++;
}
void f2 (void)
{
    x++;
}
int main(void)
{
    x=7;
    f1();
    f2();
    printf("x=%i \n",x);
}
