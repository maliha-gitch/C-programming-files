#include<stdio.h>
void func(int B[], int n);
void main()
{
    int a[5]= {10, 20, 30, 40, 50};
    int i;
    for(i=0; i<5; i++)
        printf("%d ", --a[i]);
    func(a, 5);
    printf("\n");
    for(i=0; i<5; i++)
        printf("%d ", ++a[i]);///3,4,2,3,4
}
void func(int b[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        b[i]=b[i]%3+1;///2,3,1,2,3
    }
}
