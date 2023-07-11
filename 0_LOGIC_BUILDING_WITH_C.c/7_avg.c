#include<stdio.h>
int main(){
    int a,b,c;
    float avg;
    printf("Enter number\n");
    scanf("%d\n %d\n %d\n",&a ,&b,&c);
    avg=(a+b+c)/3.0; // 3.0 will return float value
    printf("Average of number is %f",avg);
    getch();
    return 0;
}
// to be checked later