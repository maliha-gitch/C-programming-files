#include<stdio.h>
int main()

{
    FILE *fp;
    char c;
    char filename[100];
    printf("Enter the file name");
    gets(filename);
    fp=fopen(filename,"r");
    while((c=fgetc(fp))!=EOF){
          putchar(c);
    }
    fclose(fp);
}
