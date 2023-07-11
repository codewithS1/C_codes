#include<stdio.h>
int main(){
    int a;
    printf("Enter number\n");
    scanf("%d",&a);
    int b=1;
    int c=0;
    do{
        if(a%b==0){
            c=c+1;
        }
            b++;
    }
    while(b<=a);

    if(c<=2){
        printf("Prime number");
    }
    else{
        printf("Non prime number");
    }
    return 0;
}