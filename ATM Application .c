#include<stdio.h>
void main ()
{
    float balance,amount;
    int choice;
    //current account balance
    printf("enter current account balance:");
    scanf("%f",&balance);
    //choice
    printf("options");
    printf("\n1.balance enquiry");
    printf("\n2.cash withdrawal");
    printf("\n3.cash deposit");
    printf("\nenter your choice:");
    scanf("%d",&choice);

    switch (choice){
       case 1:
    //balance enquiry
    printf("current balance:%.2f\n",balance);
    break;
        case 2:
    //cash withdrawal
        printf("enter withdrawal amount:");
        scanf("%f",&amount);
if(amount<=balance)    {
    balance-=amount;
    printf("transaction succesful\nremaining balance:%.2f\n",balance);
}else{
    printf("\ninsufficient balance");
}
        break;
        case 3:
        //cash deposit
        printf("enter deposit amount:");
        scanf("%f",&amount);
        balance+=amount;
        printf("deposit successful\nupdated balance:%.2f\n",balance);
        break;
        default:
        //othwer choice
        //other choice
        printf("\ninvalid option");
    }
    printf("\nThank you");
}
