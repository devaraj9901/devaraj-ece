#include<stdio.h>

//fun dec
// void sum();
void sum(void);

int main(){
    sum();
    return 0;
}

//fun def
void sum(){
    int a=10,b=20;
    printf("the sum is %d",a+b);
}