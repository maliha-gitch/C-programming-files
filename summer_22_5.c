#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("numbers.txt", "r");

    int arr[100];
    int n = 0;

    while(fscanf(fp, "%d", &arr[n]) != EOF)
    {
        n++;
    }

    fclose(fp);

    float median;

    if(n % 2 == 1)
    {
        median = arr[n/2];
    }
    else
    {
        median = (arr[n/2 - 1] + arr[n/2]) / 2.0;
    }

    printf("Median = %.1f\n", median);

    return 0;
}
