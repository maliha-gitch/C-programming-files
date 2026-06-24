#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[100],r[100];
    fgets(s,sizeof(s),stdin);
    char temp[100];
    int i;
    int len=0;
    while(s[len]!='\0')
    {
        printf("%c",s[len]);
        len++;
    }
    printf("%d",len);
    for(int i=0;i<len;i++)
    {
        r[i] = s[len-i-1];

    }
    while(r[i]!='\0')
    {
        printf("%c",r[i]);
        i++;
    }
}
