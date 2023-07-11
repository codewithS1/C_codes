#include<stdio.h>
int main(){
    int a;
    printf("Enter number\n");
    scanf("%d",&a);
    int b=1;
    int c =0;
    for (b;b<=a;b++){
        if (a%b==0){
            c=c+1;
        }
    }
    if(c<=2){
        printf("PRIME NUMBER");
    }
    else{
        printf("NON PRIME NUMBER");
    }

    return 0;
}