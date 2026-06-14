#include<stdio.h>
int main()
{
   FILE *fp;
   char filename[20];
   char c;
   printf("Enter the filename");
   gets(filename);
   fp=fopen(filename,"w");
   while((c=getchar())!='\n'){
    fputc(c,fp);
   }
   fclose(fp);
}
