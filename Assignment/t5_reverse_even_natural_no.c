#include<stdio.h>
int main(){
    int a=2;
    int n,b;
    printf("Enter number\n");
    scanf("%d",&n);
    b=n*2;
    for(a;b>=a;b=b-2){
        printf("%d ",b);
    }
    return 0;
}