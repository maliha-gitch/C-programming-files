#include<stdio.h>
int sum(int *a,int *b)
{
    int c=(*a)+(*b);
    return c;
}
int main()
{
    int a=10, b=5;
    int c = sum(&a,&b);
    printf("%d",c);
}
