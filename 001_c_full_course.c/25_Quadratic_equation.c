#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("Enter value of a,b,c in ax^2 + bx + c = 0 \n");
    scanf("%f %f %f ",&a,&b,&c);
    d=(b*b) -(4*a*c);
    if (d>0){
        printf("Two distinct real roots\n");
    }
    else if(d<0){
        printf("No real roots\n");
    }
    else if(d==0){
        printf("Two equal real roots\n");
    }
    return 0;
}