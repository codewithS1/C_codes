#include<stdio.h>
int main(){
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    int a=2;
    for(a;a<=2*n;a=a+2){
        printf("%d ",a);
    }
    // getch();
    printf("ok");
    return 0;
}