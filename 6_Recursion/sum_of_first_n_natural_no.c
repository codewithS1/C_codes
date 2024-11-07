#include<stdio.h>
int sumofn(int n);
int main(){
    int a;
    printf("Enter value of n :\n");
    scanf("%d",&a);
    printf("Sum of first %d natural number is %d",a,sumofn(a));
    return 0;
}
int sumofn(int n){
    if (n==0){
        return 0;
    }
    int sum ;
    sum = n +sumofn(n-1);
    return sum ;
}