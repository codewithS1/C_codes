#include <stdio.h>
#include <conio.h>
int main()
{
    float a, b, c;
    char symbol;

    // printf("choose +,-,*,/\n");
    // scanf("%c",&symbol);

    printf("enter first number a\n");
    scanf("%f", &a);

    printf("choose +,-,*,/\n");
    // fflush(stdin);
    scanf(" %c", &symbol);

    printf("enter second number b\n");
    scanf("%f", &b);

    // printf("choose +,-,*,/\n");
    // scanf("%c",&symbol);

    // printf("choose +,-,*,/\n");
    // scanf("%c",&symbol);

    switch (symbol)
    {
    case '+':
        c=a+b;
        printf("%f",c);
        break;
    case '-':
        c=a-b;
        printf("%f", a - b);
        break;
    case '*':
        c=a*b;
        printf("%f", a * b);
        break;
    case '/':
        c=a/b;
        printf("%f", a / b);
        break;
    default:
        printf("Not matched\n");
    }
    return 0;
}


// #include <stdio.h>

// int main() {
//     float a, b, c;
//     char symbol;

//     printf("Enter first number a: ");
//     scanf("%f", &a);

//     // Consume the newline character left in the buffer
//     while (getchar() != '\n');

//     printf("Choose +, -, *, /: ");
//     scanf("%c", &symbol);

//     printf("Enter second number b: ");
//     scanf("%f", &b);

//     switch (symbol) {
//         case '+':
//             c = a + b;
//             printf("%.2f + %.2f = %.2f\n", a, b, c);
//             break;
//         case '-':
//             c = a - b;
//             printf("%.2f - %.2f = %.2f\n", a, b, c);
//             break;
//         case '*':
//             c = a * b;
//             printf("%.2f * %.2f = %.2f\n", a, b, c);
//             break;
//         case '/':
//             if (b != 0) {
//                 c = a / b;
//                 printf("%.2f / %.2f = %.2f\n", a, b, c);
//             } else {
//                 printf("Error: Division by zero!\n");
//             }
//             break;
//         default:
//             printf("Invalid operator!\n");
//     }

//     return 0;
// }


//use fflush function