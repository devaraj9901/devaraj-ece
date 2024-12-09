#include<stdio.h>
void display(int,int);
int main(){
    int a=10;
    int b=20;
    display(a,b); //pass by value
    printf("\nfrom main a is: %d",a);
    printf("\nfrom main b is: %d",b);
    return 0;
}

void display(int a,int b){
    a=30;
    b=40;
    printf("\nfrom display a is: %d",a);
    printf("\nfrom display b is: %d",b);
}