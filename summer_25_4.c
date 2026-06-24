#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int id;
    float marks;
};
int main()
{
    struct student s[4];
    for(int i=0;i<4;i++)
    {
         getchar();
        fgets(s[i].name,sizeof(s[i].name),stdin);
        scanf("%d",&s[i].id);
        scanf("%f",&s[i].marks);
    }
    float maxNumber = s[0].marks;
    float minNumber = s[0].marks;
    int maxId;
    int minId;

    float sum = 0;
    char maxStudent[50]=" ";
    char minStudent[50]=" ";
    for(int i=0;i<4;i++)
    {
        sum+=s[i].marks;
        if(maxNumber<s[i].marks)
        {
            maxId=s[i].id;
            strcpy(maxStudent,s[i].name);
        }
        else if(minNumber>s[i].marks)
        {
            minId=s[i].id;
           strcpy(minStudent,s[i].name);
        }
    }
    float avg = sum/4;
    printf("Maximum marks holder student : %s %d",maxStudent,maxId);
    printf("Minimum marks holder student : %s %d",minStudent,minId);
    printf("Average : %f",avg);
}
