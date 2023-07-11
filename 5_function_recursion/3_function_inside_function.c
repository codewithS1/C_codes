#include<stdio.h>
void morning(); 
void afternoon();
void night();

int main(){
    morning();
    return 0;
}   
void morning(){
    printf("Good morning\n");
    afternoon();
}
void afternoon(){
    printf("Good afternoon\n");
    night();
}
void night(){
    printf("Good night\n");
}