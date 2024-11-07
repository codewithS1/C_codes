#include<stdio.h>
int main(){
    int a[10];
    // ={10,25,56,25,25,45,1,151,10,25};
    int sum=0,i,greatest;
    printf("Enter 10 Values in a array :\n");
    for (i=0;i<=9;i++){
        scanf("%d",&a[i]);
        // printf("%d ",a[i]);
    }
    for (i=0;i<=9;i++){
        printf("%d ",a[i]);
    }
    int search;
    printf("\nEnter number you want to search in an array : ");
    scanf("%d",&search);
    printf("%d",search);

    int num_exist=0;
    for (i=0;i<10;i++){
        if(search ==a[i] ){
            num_exist+=1;
            printf("\nNumber index is  %d",i);
        }

    }
    if(num_exist>=1){
        printf("\nYour searched number exist in this array");

    }
    else if(num_exist==0){
            printf("\nYour searched number does not exist in this array.");
        }
    
    return 0;
}