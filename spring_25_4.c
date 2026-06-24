#include<stdio.h>
struct Color
{
    char name[30];
    int red_intensity;
    int green_intensity;
    int blue_intensity;
};
int get_brightness(struct Color c)
{
    int sum=0;

    sum+=(c.red_intensity+c.green_intensity+c.blue_intensity);

     int brightness=sum/3;
     return brightness;

}
int main()
{
    struct Color c[5];
    for(int i=0;i<5;i++)
    {
        getchar();
        fgets(c[i].name,sizeof(c[i].name),stdin);
        scanf("%d",&c[i].red_intensity);
        scanf("%d",&c[i].green_intensity);
        scanf("%d",&c[i].blue_intensity);
    }
    for(int i=0;i<5;i++)
    {
        int result = get_brightness(c[i]);
        printf("%d",result);
        printf("\n");

    }

}
