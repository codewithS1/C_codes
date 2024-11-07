#include<stdio.h>
int main(){
    int a,sum=0,b=1;
    printf("Enter Number\n");
    scanf("%d",&a);
    for(b;a>=b;b++){
        printf("%d\n",b);
        sum=sum+b;
        // printf("sum is %d\n",sum);
    }
    printf("sum is %d\n",sum);
    return 0;
}
