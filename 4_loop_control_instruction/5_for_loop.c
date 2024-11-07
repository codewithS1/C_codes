#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter number \n");
    scanf("%d",&b);
    for(a=1;a<=b;a++){
        printf("The value of a is %d \n",a);
        if(a==5){
                    // printf("ok \n");

            continue;
        

        }
        // printf("The value of a is %d \n",a);

    }
    return 0;
}