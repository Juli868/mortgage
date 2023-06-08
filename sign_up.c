#include <stdio.h>
/**
 * sign_up - will let a user create an account that he can run
*/
int sign_up(void)
{
    char *name[50];
    char *password[12];
    FILE* retrival;

    printf("Enter your name ");
    scanf("%s",&name);
    printf("\nEnter a password you would like to use\t Hint: not longer than 12 characters ");
    scanf("%s",password);
    retrival = fopen("Users.bin","a");
    if(retrival == NULL)
    {
        printf("Error");
    }
    fprintf(retrival, "%s\t",name);
    fprintf(retrival,"%s\n",password);
    fclose(retrival);
    return (0);
}