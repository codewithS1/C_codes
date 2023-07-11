#include<stdio.h>
int main(){
    int a=9,b=-12,c=4,d;
    // printf("Enter value of a,b,c in ax^2 + bx + c = 0 \n");
    // scanf("%d %d %d ",&a,&b,&c);
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