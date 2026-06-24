#include<stdio.h>
int main()
{
    char str1[100];

    gets(str1);


    int i=0;
    while(str1[i]!='\0')

    {
       if(str1[i]=='s'
          && str1[i+1]=='p'
          && str1[i+2]=='l')
       {
           printf("dsa");
           i=i+3;
       }
       else{
        printf("%c",str1[i]);
        i++;
       }

    }



}
