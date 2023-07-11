#include<stdio.h>
int main(){
    int lines,k;
    printf("Enter number of lines\n");
    scanf("%d",&lines);

    for (int i=1;i<=lines;i++){
        k=1;
        for(int j=1;j<=lines;j++){
            if(j<=lines+1 -i){
                printf("%d",k++);}
            else {printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}