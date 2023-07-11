#include<stdio.h>
int main(){
    int a=1,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(a;n>=a;n--){
        printf("Square of %d is %d\n",n,n*n);
    }
    return 0;
}