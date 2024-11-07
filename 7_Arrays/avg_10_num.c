#include<stdio.h>
int main(){
    float a[10],sum=0;
    printf("Enter 10 Values in a array :\n");
    for (int i=0;i<=9;i++){
        scanf("%f",&a[i]);
    }

    for (int i=0;i<=10;i++){
        // printf("%d",a[i]);
        sum=sum+i;
    }
    printf("The avg of 10 number from array is %f",(sum/10.0));
    return 0;
}