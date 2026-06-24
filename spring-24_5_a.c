#include<stdio.h>
int main()
{
    int arr[100];
    int *arrPtr = arr;
    for(int i=0;i<100;i++)
    {
        scanf("%d",arrPtr+i);
    }
    int max=*arrPtr;///&arr[0]
    for(int i=0;i<100;i++)
    {
       if(*(arrPtr+i)>max)
       {
           max=*(arrPtr+i);
       }
    }
    printf("%d",max);
}
