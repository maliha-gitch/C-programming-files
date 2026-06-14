#include<stdio.h>

int main()
{
printf("Enter the Number a and b\n");
float a,b;
scanf("%f\n %f",&a,&b);
float x;
x=(3.31 * (a*a)+ (2.01 * (b*b*b))) / ((7.16)*(b*b))+ (2.01 *(a*a*a));
printf("%f\n",x);
return 0;
}
