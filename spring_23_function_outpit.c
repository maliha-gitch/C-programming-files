#include<stdio.h>
int x = 78, y = 0, z = 156;///y=247
int first_function(int p, int q)///11921 156
{
    int x = ++p;//local x,11922 ,
    return x + z;///11922+156=12078
}
void second_function(int w, int y)///247 156
{
    y *= x;///y=y*x-->
    //y=y*x
    //y=156*78=12168
    y -= w;//local y,w local
    //y=y-w
    //y=12168-247
    //y=11921
    printf("%d %d %d\n", x, y, z);//78 11921 156
    x = first_function(y, z);//x global,

    printf("%d %d %d\n", x, y, z);///12078 11921 156
}
void main()
{
    int x = 90;
    y = first_function(x, z);//global
    printf("%d %d %d\n", x, y, z);///90 247 156
    second_function(y, z);///247 156
    printf("%d %d %d\n", x, y, z);///90 247 156
}
