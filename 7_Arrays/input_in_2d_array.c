#include<stdio.h>
int main(){
    int a[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter array\n");
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("array =%d\n",a[i][j]);
        }
    }
    return 0;
}