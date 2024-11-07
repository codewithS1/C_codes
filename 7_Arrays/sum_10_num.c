#include<stdio.h>
int main(){
    int a[10],sum=0;
    printf("Enter 10 Values in a array :\n");
    for (int i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }

    for (int i=0;i<=10;i++){
        // printf("%d\t",a[i]);
        sum=sum+a[i];
    }
    printf("The sum of 10 number from array is %d",sum);
    return 0;
}