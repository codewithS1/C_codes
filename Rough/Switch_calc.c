#include <stdio.h>
int main()
{
    int a,b;
    char symbol;

    // printf("choose +,-,*,/\n");
    // scanf(" %c",&symbol);
    
    printf("enter the number a\n");
    scanf("%d",&a);
    
    printf("enter the number b\n");
    scanf("%d",&b);

    printf("choose +,-,*,/\n");
    scanf(" %c",&symbol);
    
    switch (symbol)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%d", a / b);
        break;
    default:
        printf("Not matched\n");
    }
    return 0;
}
