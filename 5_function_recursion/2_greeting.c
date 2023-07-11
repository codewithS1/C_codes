#include<stdio.h>
void morning(); 
void afternoon();
void night();

int main(){
    morning();
    afternoon();
    night();
    return 0;
}   
void morning(){
    printf("Good morning\n");
}
void afternoon(){
    printf("Good afternoon\n");
}
void night(){
    printf("Good night\n");
}