#include<stdio.h>
int main(){
    int table;
    int no;
    int yn;
    int condition;

    condition =0;

    if(condition==0){

    printf("Enter the table no. you want to print\n");
    scanf("%d",&table);
    for ( no = 1; no <= 10; no++)
    {
        printf("%d x %d = %d\n",no,table,no*table);
    }
    condition=1;

    printf("For continue press 1");
    scanf("%d",&yn);

    
    if (yn=="1")
    {
        printf("ok");
    }
    }
    
    // printf("table is %d",no);
    return 0;
}