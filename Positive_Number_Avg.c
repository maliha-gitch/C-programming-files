#include<stdio.h>
int main()
{
    int num;

    int count=0;
    int sum=0;
    while(1){
           scanf("%d",&num);
           if(num==0)break;
           else if(num>0){
            sum+=num;
            count++;
           }
    }
    int avg=sum/count;
    printf("%d",avg);
}
