#include <stdio.h>
#include <math.h>

int isTriangle(int x, int y, int z)
{
    if ((x + y > z) && (x + z > y) && (y + z > x))
        return 1;
    else
        return 0;
}

float areaCal(int x, int y, int z)
{
    float s = (x + y + z) / 2.0;
    float area = sqrt(s * (s - x) * (s - y) * (s - z));
    return area;
}

int main()
{
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (isTriangle(a, b, c))
    {
        float area = areaCal(a, b, c);
        printf("Valid Triangle\n");
        printf("Area = %.2f\n", area);
    }
    else
    {
        printf("Invalid Triangle\n");
    }

    return 0;
}
