#include <stdio.h>
/**
 * calculate will determine all the money you need to pay for you tover the mortgage monthly.
 * Return: the monthly payment you have to pay.
*/

float calculate (int a, int b, int c, int d)
{
    int payment, numerator, denominator, counter, total;
    float power;

    power = 1;
    if (d > 0)
    {
        if (b > 0)
        {
            for(counter = 0; counter < c * d; counter++)
            power = (1 + (b / (100*d)) * power);
        }
    }
    else
    {
        return (0);
    }
    numerator = (a * (b /(d*100)) * power);
    denominator = (power - 1);
    payment = numerator / denominator;
    total = payment * d;
    return(total);
}
int main(void)
{
    int principal, interest, time, i;

    printf("Enter amount given to you\n");
    scanf("%d",& principal);
     printf("Enter time schedule in years \n");
    scanf("%f", &time);
    time=time*12;
    printf("Enter the interest rate ommit the percentage symbol \n");
    scanf("%d", &interest);
    printf("Enter the number of times to pay per year\n");
    scanf("%d", &i);
    printf ("your total payment will be %f", calculate (principal,interest,time,i));
    
}