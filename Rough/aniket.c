#include <stdio.h>
int main()
{
    int a;
    printf("Enter your marks");
    scanf("%d",&a);
    if(70>a<100)
    {
    if(a>90)
        printf("outstanding");
    else
        printf("very good");
    }
    else
    {
    if(60<a)
        printf("good");
    else
        printf("need improvement");
    }
    return 0;
}