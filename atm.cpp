#include<stdio.h>
int main()
{
    int amount;
    float balance;
    scanf("%f",&amount);
    scanf("%f",&balance);
    float rem_balance;
    if(amount%5==0)
    {
        if((amount+0.5)<=balance)
        {
            rem_balance=balance-amount-(0.5);
            printf("%f",rem_balance);
        }
        else
        printf("%f",balance);

    }
    else
    {
       printf("%f",balance);
    }
    return 0;
}
