// call by address 

#include<stdio.h>
struct Rectangle{
    int length;
    int breadth;
};
void changeLength(struct Rectangle *p,int l){
    p->length=l;
}
int main(){
    struct Rectangle r={10,5};
    changeLength(&r,20);
    printf("%d",r.length);
    return 0;
}