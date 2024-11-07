#include<stdio.h>
#include<conio.h>
int main(){
    char c ;
    printf("Enter a character\n");
    c=getch();
    printf("ASCII value of %c is %d",c,c);
    getch();
    return 0;
}
// getch takes a character from keyboard 
// we can use getch multiple times