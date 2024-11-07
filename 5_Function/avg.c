// #include<stdio.h>
// int avg(a,b,c);
// int main(){
//     float fst_value ;
//     float sec_value ;
//     float trd_value ;
//     printf("Enter 3 values :");
//     scanf("%f%f%f",&fst_value,&sec_value,&trd_value);

//     // scanf("%d%d%d",&fst_value,&sec_value,&trd_value);
//     printf("The average of given three value is %f",average(fst_value,sec_value,trd_value));
//     return 0;
// }

// int avg(a,b,c){
//     float av;
//     av=(a+b+c)/3;
//     return av;
// }

#include<stdio.h>
float average(int a, int b , int c);
int main(){
    int x;
    int y;
    int z;
    printf("Enter 3 value :\n");
    scanf("%d%d%d",&x,&y,&z);
    printf("Average of 3 value is %f",average(x,y,z));
    return 0;
}
float average(int a,int b,int c){
    float av;
    av = (float)(a+b+c)/3;
    return av;
}