// with parameter without return

#include<stdio.h>
void ctf(int temp);
int main(){
    int temperature;
    printf("Enter temperature in degree celcious ; ");
    // printf("Enter temperature in ferhanite  ; ");
    scanf("%d",&temperature);
    ctf(temperature);

    return 0;
}
void ctf(int temp){
    int ferhanite ;
    ferhanite = temp*9/5 + 32;
    
    printf("Temperature from %d (celcious) to %d (Ferhanhite)",temp,ferhanite);
}

