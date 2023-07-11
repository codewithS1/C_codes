#include<stdio.h>
int main(){
    int marks ;
    printf("Enter your MARKS (0-100) \n");
    scanf("%d",&marks);
    if (marks > 100 ){
        printf("Don't be smart Enter marks in range");
    }
    else
    {
    switch (marks/10)
    {
    case 10 :
    case 9 :
        /* Marks between 90-100 */
        printf("Your grade is A \n");
        break;
    case 8 :
        /* Marks between 80-89 */
        printf("Your grade is B\n");
        break;
    case 7 :
        /* Marks between 70-79 */
        printf("Your grade is C\n");
        break;
    case 6 :
        /* Marks between 60-69 */
        printf("Your grade is D\n");
        break;
    case 5 :
        /* Marks between 50-59 */
        printf("Your grade is E\n");
        break;
    case 4 :
        /* Marks between 40-49 */
        printf("Your grade is F (FAIL)\n");
        break;
    default:
        /* MARKS LESS THAN 40*/
        printf("Your grade is F (FAIL)\n");
        break;
    }
    }
    return 0;
}