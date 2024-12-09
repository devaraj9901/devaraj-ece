#include<stdio.h>
// function dec
int sum(int a, int b);
int main(){
    int a=10,b=10,res;
    res=sum(a,b);
    printf("the sum of %d and %d is %d",a,b,res);
    return 0;
}

//function definition
int sum(int a, int b){   
    int res=a+b;
    return res;
}
