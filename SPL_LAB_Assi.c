#include<stdio.h>

int main()
{
    int input[5][7];
    printf("Enter temperatures for 5 farms and 7 days:\n");
 for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            while(1)
            {
                scanf("%d", &input[i][j]);
                if(input[i][j] >= 5 && input[i][j] <= 60)
                {
                    break;
                }
                else
                {
                    printf("Invalid temperature! Enter again (5-60): ");
                }
            }
        }
    }
    printf("\nFarm-wise Summary\n");
    for(int i = 0; i < 5; i++)
    {
        int sum = 0;
        int heat_stress_day = 0;
        int cold_stress_day = 0;
        for(int j = 0; j < 7; j++)
        {
            sum = sum + input[i][j];

            if(input[i][j] > 40)
            {
                heat_stress_day++;
            }
            if(input[i][j] < 10)
            {
                cold_stress_day++;
            }
        }

        float avg = sum / 7.0;
        printf("\nFarm %d\n", i + 1);
        printf("Average Temperature: %.2f°C\n", avg);
        if(avg >= 30)
        {
            printf("Condition: High Heat Stress\n");
        }
        else if(avg >= 20 && avg < 30)
        {
            printf("Condition: Optimal\n");
        }
        else
        {
            printf("Condition: Low Temperature Stress\n");
        }

        printf("Heat Stress Days (>40°C): %d\n", heat_stress_day);

        printf("Cold Stress Days (<10°C): %d\n", cold_stress_day);
    }
    int highest = input[0][0];
    int lowest = input[0][0];

    int highest_farm = 0;
    int lowest_farm = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            if(input[i][j] > highest)
            {
                highest = input[i][j];
                highest_farm = i;
            }

            if(input[i][j] < lowest)
            {
                lowest = input[i][j];
                lowest_farm = i;
            }
        }
    }
    printf("\nExtreme Temperature Records\n");
    printf("Highest Single-Day Temperature: %d°C (Farm %d)\n",
           highest, highest_farm + 1);
    printf("Lowest Single-Day Temperature: %d°C (Farm %d)\n",
           lowest, lowest_farm + 1);
    printf("\nDaily Average Temperatures (Across All Farms)\n");
    float hottest_avg = 0;
    float coldest_avg = 100;

    int hottest_day = 0;
    int coldest_day = 0;
    for(int j = 0; j < 7; j++)
    {
        int sum = 0;
        for(int i = 0; i < 5; i++)
        {
            sum = sum + input[i][j];
        }
        float daily_avg = sum / 5.0;
        printf("Day %d: %.1f°C\n", j + 1, daily_avg);
        if(daily_avg > hottest_avg)
        {
            hottest_avg = daily_avg;
            hottest_day = j;
        }
        if(daily_avg < coldest_avg)
        {
            coldest_avg = daily_avg;
            coldest_day = j;
        }
    }

    printf("\nOverall Day Analysis\n");
    printf("Hottest Day (Highest Average): Day %d (%.1f°C)\n",
           hottest_day + 1, hottest_avg);
    printf("Coldest Day (Lowest Average): Day %d (%.1f°C)\n",
           coldest_day + 1, coldest_avg);

    return 0;
}
