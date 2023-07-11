#include<stdio.h>
int main(){
    // a-z = 97-122 ASCII values
    char ch ;
    printf("Enter a character \n");
    scanf("%c",&ch);
    if (ch>=97 && ch<=122){
    printf("Its an LOWERCASE ");
    }
    else {
        printf("Its not an LOWERCASE");
    }

    return 0;
}