#include<stdio.h>

struct student
{
    char name[50];
    int ID;
    float marksCT[5];

};
int main()
{
    struct student s[50];
    for(int i=0;i<50;i++)
    {
        getchar();
        fgets(s[i].name,sizeof(s[i].name),stdin);
        scanf("%d",&s[i].ID);
        for(int j=0;j<5;j++)
            {
                scanf("%f",&s[i].marksCT[j]);
            }
    }
    for(int i=0;i<50;i++)
    {
        float totalMarks = 0;
        for(int j=0;j<5;j++)
        {
            totalMarks+=s[i].marksCT[j];
        }
        printf("%.2f",totalMarks);
    }


        for(int j=0;j<5;j++)
        {
             float highestMarks = s[0].marksCT[j];
             int idx;
             for(int i=0;i<50;i++)
           {

           if(s[i].marksCT[j]>highestMarks)
           {
               highestMarks=s[i].marksCT[j];
               idx=i;
           }
        }
        printf("%.2f %s",highestMarks,s[idx].name);
    }

}
