#include <stdio.h>
#include <math.h>
#include "juli.h"
/**
 * main - will use all needed funtions to be able to generate your requests.
 * Return: the final result after compilation.
*/
int main(void)
{
    /**int principal,i;
    float interest,time;
    */char ans;

    printf("Welcome back to\n\t\tOUR page:\n are you a registered user\n use y for yes or N for no");
    scanf("%c",&ans);
    if (ans == 'y' || ans == 'Y')
        printf("login()");
    else
        sign_up();
        return (0);
    }