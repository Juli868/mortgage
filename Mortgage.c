#include <stdio.h> 
void main()
{
    int amount,principal,i;
    float interest,time,first_part;
    char ans;
    printf("Enter amount given to you\n");
    scanf("%d",& amount);
    printf("Is your mortgage anually? Answer by 'Y' or 'N'");
    scanf("%c",&ans);
    if (ans=='Y' || ans=='y')
    {
        printf("Enter time schedule in years");
        scanf("%f", &time);
        time=time*12;
        printf("Enter the interest rate ommit the percentage symbol ");
        scanf("%f", &interest);
        if (interest>1)
        {
            interest=interest/100;
        }
        first_part=interest+1;
        for (i=1;i>=time;i++)
        {
            first_part=first_part*first_part;
        }
        amount=principal*interest*first_part/(first_part-1);
        printf("you will pay this %d every month", amount);
    }
}