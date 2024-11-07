#include <stdio.h>
#include <conio.h>
int main()
{
    float a, b, c;
    char symbol;

    printf("choose +,-,*,/\n");
    scanf("%c", &symbol);

    printf("enter first number a\n");
    scanf("%f", &a);
    printf("enter second number b\n");
    scanf("%f", &b);

    // printf("choose +,-,*,/\n");
    // scanf("%c",&symbol);

    switch (symbol)
    {
    case '+':
        c=a+b;
        printf("%d",c);
        break;
    case '-':
        c=a-b;
        printf("%d", a - b);
        break;
    case '*':
        c=a*b;
        printf("%d", a * b);
        break;
    case '/':
        c=a/b;
        printf("%d", a / b);
        break;
    default:
        printf("Not matched\n");
    }
    return 0;
}