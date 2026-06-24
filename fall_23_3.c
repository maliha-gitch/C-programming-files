#include<stdio.h>

struct Customer
{
    char name[50];
    int Id;
    int shopped;
    float moneySpend[10];
};

int main()
{
    struct Customer c[100];
    float avg[100];

    for(int i = 0; i < 100; i++)
    {
        getchar();

        fgets(c[i].name, sizeof(c[i].name), stdin);

        scanf("%d", &c[i].Id);
        scanf("%d", &c[i].shopped);

        if(c[i].shopped > 10)
            c[i].shopped = 10;

        float sum = 0;

        for(int j = 0; j < c[i].shopped; j++)
        {
            scanf("%f", &c[i].moneySpend[j]);
            sum += c[i].moneySpend[j];
        }

        if(c[i].shopped > 0)
            avg[i] = sum / c[i].shopped;
        else
            avg[i] = 0;
    }

    // find best customer
    float bestAvg = -1;
    int bestIndex = -1;

    for(int i = 0; i < 100; i++)
    {
        if(c[i].shopped > 10)
        {
            if(avg[i] > bestAvg)
            {
                bestAvg = avg[i];
                bestIndex = i;
            }
        }
    }

    if(bestIndex != -1)
    {
        printf("Best Customer: %s\n", c[bestIndex].name);
    }
    else
    {
        printf("No eligible customer found.\n");
    }

    return 0;
}
