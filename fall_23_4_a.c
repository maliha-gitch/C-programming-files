#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int *p;
    p=&num;
    printf("Before = %d\n",num);
    (*p)=(*p)*2;
    printf("After = %d",num);
}
