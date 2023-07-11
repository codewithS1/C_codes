#include<stdio.h>
int main(){
    int num;
    int a=1 ;
    int count=0;
    printf("Enter number \n");
    scanf("%d",&num);
    while(num>=a){
        if (num % a==0){
        count=count+1;
        a++;}
        else{a++;}
        
    }
    if (count<=2 ){
        printf("PRIME NUMBER");
    }
    else{printf("NON PRIME NUMBER\n");
        // printf("%d \n", count);
    }
    return 0;
}