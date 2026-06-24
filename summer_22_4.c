#include<stdio.h>
struct Bowlers
{
    float totalWickets;
    float totalMatches;
    float totalRuns;
    char name[50];
    char country[50];
    float avgBowler;
};
int main()
{
    struct Bowlers b[100];
    for(int i=0;i<100;i++)
    {
        scanf("%f",&b[i].totalWickets);
        scanf("%f",&b[i].totalMatches);
        scanf("%f",&b[i].totalRuns);
        getchar();
        fgets(b[i].name,sizeof(b[i].name),stdin);
        fgets(b[i].country,sizeof(b[i].country),stdin);

    }
    for(int i=0;i<100;i++)
    {
        b[i].avgBowler = b[i].totalRuns/b[i].totalWickets;
    }
    float maxAvg = b[0].avgBowler;
    int maxInfo = 0;
    for(int i=0;i<100;i++)
    {
        if(b[i].avgBowler>maxAvg)
        {
            maxAvg=b[i].avgBowler;
            maxInfo = i;
        }
    }
    printf("%f %f %f %s %s ",b[maxInfo].totalWickets,b[maxInfo].totalMatches,b[maxInfo].totalRuns
           ,b[maxInfo].name,b[maxInfo].country);

}
