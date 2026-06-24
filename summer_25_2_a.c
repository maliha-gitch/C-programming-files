#include<stdio.h>
#include<string.h>
int main()
{
char Str1[8] = {'\0'};
char Str2[4] = {'\0'};
int i;
strcpy(Str1,"UIU");
strcpy(Str2,"CSE");
strcat(Str1," ");
strcat(Str1, Str2);
i = strlen(Str1);
if (strcmp(Str2, Str1)<0)
printf("String=%s length=%d\n", Str2, strlen(Str2));
else
printf("String=%s length=%d\n", Str1, i);

}

