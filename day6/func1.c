
#include<stdio.h>

// fun dec
int sum(); 

void main(){
    int res;
    res=sum();
    printf("sum is : %d",res);
}

//func def
int sum(){
    int a=30,b=50,res;
    return a+b;
}