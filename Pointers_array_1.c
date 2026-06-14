#include<stdio.h>
int main()
{
    int A[]={2,4,6,8,10};
    int *p = A;
    for(int i=0;i<5;i++)
    {
        printf("%d\n",&A[i]);
        printf("%d\n",A+i);
        printf("%d\n",A[i]);
        printf("%d\n",*(A+i));
    }
}
