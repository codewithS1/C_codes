#include<stdio.h>
int main(){
    int a[10]={3,3,3,3,3,3,3,3,3,3};
    int sum = 0,even=0,odd=0;
    printf("Enter 10 Values in a array :\n");
    for (int i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }

    for (int i=0;i<=9;i++){
        sum=sum+a[i];


        // printf("%d",a[i]);
        if(a[i]%2==0){
            even+=a[i];
        }
        else if(a[i]%2!=0){
            odd+=a[i];
        }
        // sum=sum+a[i];
    }
    printf("The sum of 10 number from array is %d\n",sum);
    printf("The sum of even number from array is %d\n",even);
    printf("The sum of odd number from array is %d\n",odd);
    return 0;
}