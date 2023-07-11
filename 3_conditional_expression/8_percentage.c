#include<stdio.h>
int main(){
    int marks1,marks2,marks3,marks4,marks5;
    printf("enter your subject1 marks :\n");
    scanf("%d",&marks1);
    printf("enter your subject2 marks:\n");
    scanf("%d",&marks2);
    printf("enter your subject3 marks:\n");
    scanf("%d",&marks3);
    printf("enter your subject4 marks:\n");
    scanf("%d",&marks4);
    printf("enter your subject5 marks:\n");
    scanf("%d",&marks5);
    int totalpercentage ;
    totalpercentage = (marks1+marks2+marks3+marks4+marks5) /5 ;
    printf("your percentage is %d \n",totalpercentage);
    if (totalpercentage<=40 || marks1 <33 || marks2<33|| marks3 < 33 || marks4<33|| marks5 < 33 ){
        printf("FAIL");
    } 
    else{
        printf("PASS");
    }
    return 0;
}