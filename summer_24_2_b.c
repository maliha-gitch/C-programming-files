#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i=0;
    int n;
    scanf("%d",&n);

   while(str[i] != '\0')
    {
        if((i + 1) % n == 0)   // nth character
        {
            str[i] = 'Z';
        }
        i++;
    }

    printf("%s", str);
}
