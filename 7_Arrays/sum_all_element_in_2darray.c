#include<stdio.h>
int main(){
    int a[2][2]={{11,12},{15,20}};
    int b[2][2]={{1,2},{5,2}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            // printf("Enter array\n");
            // scanf("%d",&a[i][j]);
            printf("%d    *    %d =    %d\n",a[i][j],b[i][j],a[i][j]*b[i][j]);

        }
    }
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         printf("array =%d\n",a[i][j]);
    //     }
    // }
    return 0;
}