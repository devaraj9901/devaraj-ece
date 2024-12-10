#include<stdio.h>

// int sum(int,int);
void sum(int,int);

int main(){
    int a=10,b=40;
    sum(a,b);
    return 0;
}

void sum(int a, int b){
    printf("The result is %d",a+b);
}
