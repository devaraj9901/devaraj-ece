#include<stdio.h>

//func dec
// void sum(int a, int b);
void sum(int, int);

int main(){
    int a=10,b=20,res;
    sum(a,b);
    return 0;
}

// fun def
void sum(int a, int b){
    printf("the sum is %d",a+b);
}
