#include<stdio.h>
float celsius_to_fahrenheit(float C)
{
    float F = (C*(9/5))+32;
    printf("Farhenate = %f",F);
    printf("\n");
    return F;
}
int main()
{
    float C;
    scanf("%f",&C);
    float temp = celsius_to_fahrenheit(C);
    if(temp<68)
    {
        printf("Cold");
    }
    else if(temp>=68 && temp<=82.4)
    {
        printf("Moderate");
    }
    else if(temp>82.4)
    {
        printf("Hot");
    }
}
