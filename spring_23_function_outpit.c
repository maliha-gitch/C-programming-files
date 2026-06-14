#include<stdio.h>
int x = 78, y = 0, z = 156;
int first_function(int p, int q)
{
    int x = ++p;//local
    return x + z;
}
void second_function(int w, int y)
{
    y *= x;//local y,x used global value
    //y=y*x
    //y=156*78=12168
    y -= w;//local y,w local
    //y=y-w
    //y=12168-247
    //y=11921
    printf("%d %d %d\n", x, y, z);//78 11921 156
    x = first_function(y, z);//x local

    printf("%d %d %d\n", x, y, z);
}
void main()
{
    int x = 90;
    y = first_function(x, z);//global
    printf("%d %d %d\n", x, y, z);
    second_function(y, z);
    printf("%d %d %d\n", x, y, z);
}
