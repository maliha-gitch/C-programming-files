#include <stdio.h>
int x = 10;//12
int y = 20;
int func(int a, int b) {//a=4,b=7
int y = 5;//local
x += 2;//x global
//x=x+2
//x=12
y += 3;//y local
//y=y+3
//y=8
a += y;
//a=a+y
//a=4+8
//a=12
b += x;
//b=b+x
//b=7+12
//b=19
printf("x = %d, y = %d, a = %d, b = %d.\n", x, y, a, b);//12 8 12 19
return a * b + x - y;//232
}
int main() {
int a = 4, b = 7;
a = func(a, b);//232
printf("a = %d, b = %d, x = %d.\n", a, b, x);//232 7 12
return 0;
}
