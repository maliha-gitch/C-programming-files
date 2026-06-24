#include<stdio.h>
struct player
{
    char name[50];
    int ID;
    int matchPlayed;
    int G[50];
};
int goalsScored(struct player p,int matches)
{
    int sum=0;
    for(int i=0;i<matches;i++)
    {
      sum+=p.G[i];
    }
    return sum;
}
int selectBestScorer(struct player b[], int total_players)
{
    int bestIndex = 0;

    for(int i = 1; i < total_players; i++)
    {
        if(goalsScored(b[i], b[i].matchPlayed) >
           goalsScored(b[bestIndex], b[bestIndex].matchPlayed))
        {
            bestIndex = i;
        }
    }

    return bestIndex;
}
int main()
{
    struct player p[120];
    int totalGoals[120];
    for(int i=0;i<120;i++)
    {
        getchar();
        fgets(p[i].name,sizeof(p[i].name),stdin);
        scanf("%d",&p[i].ID);
         scanf("%d",&p[i].matchPlayed);
         for(int j=0;j<50;j++)
         {
             scanf("%d",&p[i].G[j]);
         }

    }
    int best = selectBestScorer(p, 120);
    printf("\nBest Goal Scorer:\n");
    printf("Name: %s", p[best].name);
    printf("ID: %d\n", p[best].ID);
    printf("Total Goals: %d\n",
           goalsScored(p[best], p[best].matchPlayed));




}
