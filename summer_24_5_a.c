#include<stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int A[20];
    int *aPtr;
    aPtr=A;
    for(int i=0;i<20;i++)
    {
        scanf("%d",(aPtr+i));
    }
    for(int i=0;i<20;i++)
    {
        printf("%d ",*(aPtr+i));
    }
    printf("\n");
    swap(&A[5],&A[11]);
 for(int i=0;i<5;i++)
    {
        printf("%d ",*(aPtr+i));
    }
}
