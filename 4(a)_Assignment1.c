#include<stdio.h>
int main()
{
    int count=0;
    float sum=0;
    float avg;
float num;
    while(1)
    {
        scanf("%f",&num);
        if(num>0){
            count++;
            sum+=num;
             avg=sum/count;
            printf("%.1f",avg);
            if(count==4){
                break;
            }
        }
    }

}
