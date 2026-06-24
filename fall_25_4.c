#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[50];
    int id;
    float course_1_marks;
    float course_11_marks;
    char phone[20];
    char email[20];
};
int main()
{
    struct student s[2];
    for(int i=0;i<2;i++)
    {
        getchar();
        fgets(s[i].name,sizeof(s[i].name),stdin);
         scanf("%d",&s[i].id);
        scanf("%f",&s[i].course_1_marks);
         scanf("%f",&s[i].course_11_marks);
         fgets(s[i].phone,sizeof(s[i].phone),stdin);
         fgets(s[i].email,sizeof(s[i].email),stdin);
    }
     for(int i=0;i<2;i++)
    {
        printf("%s",s[i].name);
         printf("%d",s[i].id);
        printf("%f",s[i].course_1_marks);
        printf("%f",s[i].course_11_marks);
        printf("%s",s[i].phone);
        printf("%s",s[i].email);


    }

    for(int i=0;i<2;i++)
    {
        float sum=0;
        sum+=s[i].course_1_marks+s[i].course_11_marks;
        float avg=sum/2;
        printf("%f",avg);
    }

}
