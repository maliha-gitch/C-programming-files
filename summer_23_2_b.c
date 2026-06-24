#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);
    int count;

    for(int i=0; str1[i]!='\0'; i++)
    {
        if(str1[i]>='A' && str1[i]<='Z')
            str1[i] = str1[i] + 32;
    }


    for(int i=0; str2[i]!='\0'; i++)
    {
        if(str2[i]>='A' && str2[i]<='Z')
            str2[i] = str2[i] + 32;
    }
    for(int i=0;str1[i]!='\0';i++)
    {
        int j=0;
        while(str2[j]!='\0' && str1[i+j]==str2[j])
        {
            j++;
        }

        if(str2[j]=='\0')
        {
           count++;
        }

    }
    printf("%d",count);
}
