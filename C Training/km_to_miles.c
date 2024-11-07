// miles to kilometer

#include<stdio.h>
int main(){
    float km,m;
    printf("Enter value in miles :");
    scanf("%f",&m);
    km=m*1.609;
    printf("%.2f km",km);
    return 0;
}