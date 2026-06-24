#include<stdio.h>
struct Patient
{
    char name[50];
    int age;
    float height;
    float weight;
    float BMI;
};
int main()
{
    struct Patient p[100];
    for(int i=0;i<100;i++)
    {
        getchar();
        fgets(p[i].name,sizeof(p[i].name),stdin);
        scanf("%d",&p[i].age);
         scanf("%f",&p[i].height);
          scanf("%f",&p[i].weight);
          p[i].BMI = p[i].height/p[i].weight;
    }
    int youIndx=0;
    int minAge=p[0].age;
    for(int i=0;i<100;i++)
    {
        if(p[i].age<minAge)
        {
            minAge=p[i].age;
            youIndx=i;
        }
    }
    printf("%s %d %f %f %f ",p[youIndx].name,p[youIndx].age
           ,p[youIndx].height,p[youIndx].weight,p[youIndx].BMI);
}
