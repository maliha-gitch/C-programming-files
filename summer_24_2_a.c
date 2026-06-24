#include<stdio.h>
#include <string.h>
int main()
{
    char A[50] = "Structured";
    char B[50] = "Coding";
    int len = strlen(A);
    for (int i=0; i<strlen(B); i++)
    {
        A[len-i-1] = B[i];
    }
    printf("A: %s\n", A);
    printf("B: %s\n", B);
    strncat(A, B, 2);
    for (int j=0; j<4; j++)
        A[j] = B[strlen(B)-j-1];
    printf("A: %s\n", A);
    printf("B: %s\n", B);
    return 0;
}
