#include<stdio.h>
int main()
{
int n;
printf("Enter the size");
scanf("%d",&n);

int target;
printf("Enter the target value : ");
scanf("%d",&target);
int arr[n];
int guessNumber;
int flag=0;
for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    guessNumber=arr[i];
    if(target==guessNumber)
    {
            printf("player-2 wins");
            flag=1;
            break;

    }
    else
    {
        printf("Wrong,%d Choices(s)Left",n-i-1);
    }
}
if(flag==0)
{
    printf("Player 1 wins!\n");
}


}
