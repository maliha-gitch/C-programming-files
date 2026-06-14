#include<stdio.h>

int add(int x,int y){

   int sum=x+y;
   return sum;

}
int sub(int x,int y){

   int sub=x-y;
   return sub;

}
int mul(int x,int y){

   int mul=x*y;
   return mul;

}
int div(int x,int y){

   int div=x/y;
   return div;

}
int rem(int x,int y){

   int rem=x%y;
   return rem;

}
int main(){
int x,y;
printf("Enter the x and y value\n");
scanf("%d %d",&x,&y);
printf("Result of sum = %d\n",add(x,y));
printf("Result of sub = %d\n",sub(x,y));
printf("Result of mul = %d\n",mul(x,y));
printf("Result of div = %d\n",div(x,y));
printf("Result of rem = %d\n",rem(x,y));





}
