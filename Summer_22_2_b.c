#include<stdio.h>
void inputData(int goals[],int mins[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&goals[i]);
    }
     for(int i=0;i<n;i++)
    {
        scanf("%d",&mins[i]);
    }

}
int countOfHattricks(int goals[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(goals[i]>=3)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int goals[n];
    int mins[n];
    inputData(goals,mins,n);
    int result = countOfHattricks(goals,n);
    printf("%d",result);

}
