#include<stdio.h>
int main(){
    int num1;
    printf("enter 1st number \n");
    scanf("%d",&num1);

    int num2 ;
    printf("enter 2nd number \n");
    scanf("%d",&num2);

    int num3 ;
    printf("enter 3rd number \n");
    scanf("%d",&num3);

    int num4 ;
    printf("enter 4th number \n");
    scanf("%d",&num4);

    if ( num1>num2 && num1>num3 && num1>num4 ){
        printf("%d is greatest",num1);
    }
    else if ( num2>num1 && num2>num3 && num2>num4 ){
        printf("%d is greatest",num2);
    }
    else if ( num3>num2 && num3>num1 && num3>num4 ){
        printf("%d is greatest",num3);
    }
    else if ( num4>num2 && num4>num3 && num4>num1 ){
        printf("%d is greatest",num4);
    }
    
    return 0;
}