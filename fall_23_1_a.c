#include<stdio.h>
void updateBalance(float arr[],int customerId,
                   int transactionType,float transactionAmount)
{




    if(transactionType == 1)
    {
        if(transactionAmount<=arr[customerId])
        {
            arr[customerId]-=transactionAmount;
            printf("withdraw successfully\n");
            printf("Remaing Amount %d customer Balance = %f",customerId,arr[customerId]);

        }
        else
        {
            printf("not sufficient balance");
        }

    }
    else if(transactionType == 2)
    {
        arr[customerId]-=transactionAmount;
        printf("Now Total Balance = %f",arr[customerId]);
    }

}



int main()
{
    float customerBalance[5];
    printf("Enter the user balance : ");
    int customerId;
    int transactionType;
    float transactionAmount;
    printf("\n");
    for(int i=0; i<5; i++)
    {
        printf("%d customer Id Balance: ",i);
        scanf("%f",&customerBalance[i]);
    }
    printf("Enter the  customer ID transaction type (1=withdraw, 2=deposit) and amount : ");
    scanf("%d %d %f",&customerId,&transactionType,&transactionAmount);
    updateBalance(customerBalance,customerId,transactionType,transactionAmount);

}
