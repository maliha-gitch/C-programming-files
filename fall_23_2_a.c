#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50]="CSE-1111 SPL";
    char str2[50]="I am a UIUian";
    int i=strlen(str1) * 0.5 - 2;
    for(int m=0; i+m<strlen(str1); m+=3)
    {
        str1[i+m]=str2[m];
    }
    strcat(str1, str2);
    if(strcmp(str2, str1)>0)
    {
        strncat(str1, "CSE is awesome.",6);
    }
    else
    {
        strncat(str2, "CSE is awesome.",6);
    }



    return 0;
}
