#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i=0;
    int countA=0;
    int countE=0;
    int countI=0;
    int count0=0;
    int countU=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='A')
        {
            countA++;

        }
         else if(str[i]=='e' || str[i]=='E')
        {
            countE++;

        }
         else if(str[i]=='i' || str[i]=='I')
        {
            countI++;

        }
         else if(str[i]=='o' || str[i]=='O')
        {
            count0++;

        }
        else if(str[i]=='u' || str[i]=='U')
        {
            countU++;

        }
        i++;
    }
    printf("A/a : %d ",countA);
      printf("E/e : %d ",countE);
        printf("I/i : %d ",countI);
        printf("O/o : %d ",count0);
          printf("U/u : %d ",countU);
}
