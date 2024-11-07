#include<stdio.h>
int main(){
    int arr1[5],arr2[5],arr3[5],i;

    printf("Enter five values in First array\n");
    for(int i=0;i<5;i++)
    scanf("%d",&arr1[i]);

    printf("Enter five values in second array\n");
    for(int i=0;i<5;i++)
    scanf("%d",&arr2[i]);

    for(i=0;i<5;i++){
        arr3[i]=arr1[i]*arr2[i];
    }
    printf("Multiplication of two Array ");
    for(i=0;i<5;i++){
        printf(" %d\t",arr3[i]);
    }

    return 0;
}