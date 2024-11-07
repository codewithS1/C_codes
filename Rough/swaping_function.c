#include <stdio.h>
void swap(int *, int *);
void main()
{
    int a, b;
    printf("enter two numbers:");
    scanf("%d%d", &a, &b);
    printf("\nbefore swaping \n:");
    printf("a=%d \t b=%d", a, b);
    swap(&a,&b);
    printf("\n after swaping \n:");
    printf("a=%d \t b=%d", a, b);
    // getch();
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}