#include<stdio.h>
int main(){
    int a[2][2]  ={{11,12},{13,14}};
    int b[2][2];
    printf("Enter value in array b[2][2] ;\n");
    scanf("%d%d%d%d",&b[0][0],&b[0][1],&b[1][0],&b[1][1]);
    // printf("%d",a[1][0]);
    // a[0][1]=27;
    printf("Array =[{ %d %d} {%d %d} ]",b[0][0],b[0][1],b[1][0],b[1][1]);
    return 0;
}