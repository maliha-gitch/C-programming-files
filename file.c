#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("student.txt","r");
    //fputs("This is spl class.",fp);//write
    char s1[100];
    fgets(s1,sizeof(s1),fp);//read
    printf(s1);
    fclose(fp);


}
