#include<stdio.h>
int main(){
    int a=1,n,b;
    printf("Enter Number\n");
    scanf("%d",&n);
    b=n*2;
    if (b%2==0){
        b=b-1;
        for(a;a<=b;a=a+2){
            printf("%d ",a);
        }
    }
    else {
        for(a;a<=b;a=a+2){
            printf("%d ",a);
        }
    }
    return 0;
}