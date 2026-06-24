#include <stdio.h>
#include <string.h>
int main()
{
    char A[101] = {'\0'};
    char B[101] = "string";
    strncpy(A, B, 4);
    strncat(A, "kernel", 3);
    for(int i=0; B[i]!='\0'; i++)
    {
        if(B[i]=='i')
        {
            B[i] = '\0';
        }
    }
    printf("%s - %s\n", A, B);
    return 0;
}
