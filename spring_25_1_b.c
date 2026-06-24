#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]!=str[i+1])
        {
          printf("%c",str[i]);
        }

        i++;
    }
}
