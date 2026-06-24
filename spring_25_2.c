#include<stdio.h>
int main()
{
    int s[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&s[i][j]);
        }
    }

    int MaxROwDiff=0;
    for(int i=0;i<3;i++)
    {
        int maxelement=s[i][0];
        int minelement=s[i][0];
        for(int j=1;j<3;j++)
        {
            if(s[i][j]>maxelement)
            {
                maxelement=s[i][j];

            }
            else if(s[i][j]<minelement)
            {
                minelement=s[i][j];
            }
            int diff = maxelement - minelement;
            if(diff>MaxROwDiff)
            {
                MaxROwDiff=diff;
            }

        }
    }
            printf("MaximumRowDiff = %d",MaxROwDiff);
            printf("\n");
}
