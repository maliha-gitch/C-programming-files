#include <stdio.h>
int main()
{
    int n;
    printf("Matrix size: ");
    scanf("%d", &n);

    int arr[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int maxDiff = 0;
    for(int i = 0; i < n; i++)
    {
        int max = arr[i][0];
        int min = arr[i][0];

        for(int j = 1; j < n; j++)
        {
            if(arr[i][j] > max)
                max = arr[i][j];

            if(arr[i][j] < min)
                min = arr[i][j];
        }

        int diff = max - min;

        if(diff > maxDiff)
            maxDiff = diff;
    }

    printf("Maximum row difference: %d\n", maxDiff);

    return 0;
}
