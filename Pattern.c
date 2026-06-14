#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(n-i+1>=j){
                printf("%d",2*(n-j+1));
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
