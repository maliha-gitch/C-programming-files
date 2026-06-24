#include <stdio.h>
int power_of_2(int n)
{
    printf("Inside power_of_2(%d)\n", n);
    if(n == 1) return 1;
    if(n % 2 != 0) return 0;
    return power_of_2(n / 2);
}
int main(void)
{
    int num = 16;
    power_of_2(num);
    return 0;
}
