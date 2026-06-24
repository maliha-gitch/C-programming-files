#include<stdio.h>
void change(int *x, int b){
int *p;
p=x;
*p=*p+10;
b=b-3;
}
int main(){
int a=5, b=9;
printf("%d %d\n", a, b);
change(&a, b);
printf("%d %d", a, b);
return 0;
}
