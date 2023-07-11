#include<stdio.h>
int main(){
    int a=1,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(a;a<=n;a++){
        printf("Square of %d is %d\n",a,a*a);
    }
    return 0;
}