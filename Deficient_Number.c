#include <stdio.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    printf("%d",sum);

    if (sum < 2 * n)
        printf("Deficient number\n");
    else
        printf("Not a deficient number\n");

    return 0;
}
