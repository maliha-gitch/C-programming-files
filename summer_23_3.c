#include<stdio.h>
struct Cricketer
{
    char name[50];
    char country[50];

    char CricketerType[10];///bowler or batsman

    int wickets[30];
    int runs[30];

    int totalMatchPlaye;
    float performanceScore;

};
int main()
{
    struct Cricketer c[100];
    for(int i=0;i<100;i++)
    {
        getchar();
        fgets(c[i].name,sizeof(c[i].name),stdin);
        getchar();
        fgets(c[i].country,sizeof(c[i].country),stdin);
        getchar();
        fgets(c[i].CricketerType,sizeof(c[i].CricketerType),stdin);
        for(int j=0;j<30;j++)
        {
            scanf("%d",&c[i].wickets[j]);
        }
        for(int j=0;j<30;j++)
        {
            scanf("%d",&c[i].runs[j]);
        }
        scanf("%d",&totalMatchPlaye);
    }
    // Calculate performance score
    for(int i=0; i<100; i++)
    {
        int totalWickets = 0;
        int totalRuns = 0;

        for(int j=0; j<30; j++)
        {
            totalWickets += c[i].wickets[j];
            totalRuns += c[i].runs[j];
        }

        if(c[i].CricketerType[0]=='b' &&
           c[i].CricketerType[1]=='o')   // bowler
        {
            c[i].performanceScore =
                (float)totalWickets /
                c[i].totalMatchPlayed;
        }
        else                              // batsman
        {
            c[i].performanceScore =
                (float)totalRuns /
                c[i].totalMatchPlayed;
        }
    }

    // Find Cricketer of the Year
    int bestIndex = 0;
    float maxPerformance = c[0].performanceScore;

    for(int i=1; i<100; i++)
    {
        if(c[i].performanceScore > maxPerformance)
        {
            maxPerformance = c[i].performanceScore;
            bestIndex = i;
        }
    }

    // Output
    printf("\n===== Cricketer of the Year =====\n");

    printf("Name: %s", c[bestIndex].name);
    printf("Country: %s", c[bestIndex].country);
    printf("Type: %s\n", c[bestIndex].CricketerType);

    printf("Total Matches Played: %d\n",
           c[bestIndex].totalMatchPlayed);

    printf("Performance Score: %.2f\n",
           c[bestIndex].performanceScore);

    return 0;
}
