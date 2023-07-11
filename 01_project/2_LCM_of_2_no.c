#include <stdio.h>
#include<stdlib.h>
int main()
{
    int initialisation_a = 1,initialisation_b = 1, first_no , second_no , last_a , last_b ;

    printf("Enter a number\n");
    scanf("%d",&first_no);

    printf("Enter second number\n");
    scanf("%d",&second_no);

    printf("Enter number till you want to multiply 1st number;\n");
    printf("****Take it as 10***** \n**If showing no result improve value**\n");
    scanf("%d",&last_a);

    printf("Enter number till you want to multiply 2nd number;\n");
    scanf("%d",&last_b);

        int multiple_a, multiple_b = 1;
    for (initialisation_a ; initialisation_a  <= last_a; initialisation_a ++)
    {
        multiple_a = (initialisation_a  * first_no);
        // printf("%d\n", c);
        if (multiple_b == (last_a*second_no))
        {
            initialisation_b = 1;
        }

        for (initialisation_b; initialisation_b <= last_b; initialisation_b++)
        {
            multiple_b = (initialisation_b * second_no);
            // printf("%d\n", d);
            if (multiple_a == multiple_b)
            {
                printf("LCM is %d\n",multiple_b);
                exit(1);
            }
        }
    }
    return 0;
}