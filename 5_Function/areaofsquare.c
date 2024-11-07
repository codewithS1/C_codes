#include<stdio.h>
int as(int s) ;
int main(){
    int a;
    printf("Enter side of square :");
    scanf("%d",&a);
    as(a);
    // printf("%d",a*a);

    return 0;
}

int as(int s){
    printf("%d",s*s);
}