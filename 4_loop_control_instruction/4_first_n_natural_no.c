#include<stdio.h>
int main(){
    int a;
    int i=1;
    printf("Enter number \n");
    scanf("%d",&a);
    do{
        printf("The value of a is %d\n",i);
        i++ ;
    }while(a>=i);
    return 0;
}