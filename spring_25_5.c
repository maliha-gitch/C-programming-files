#include <stdio.h>
void process(int *p)
{

    for(int i=0; i<4; i++)

        if(*(p+i)%2==0)
        {
            *(p+i)*=*(p+i);
        }
}
int main()
{

    int a[]= {1,2,3,4};

    process(a);

    for(int i=0; i<4; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
///Output-1 4 3 16
