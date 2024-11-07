#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 number :\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d is greatest of all",a);
        }
    }
    if(b>a){
        if(b>c){
            printf("%d is greatest of all",b);
        }
    }
    if(c>a){
        if(c>b){
            printf("%d is greatest of all",c);
        }
    }
    return 0;
}