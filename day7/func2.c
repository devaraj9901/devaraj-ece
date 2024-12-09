#include<stdio.h>
void display(int *,int *);
int main(){
    int a=10;
    int b=20;
    display(&a,&b); //pass by reference or address
    printf("\nfrom main a is: %d",a);
    printf("\nfrom main b is: %d",b);
    return 0;
}

void display(int *p,int *p1){
    *p=30;
    *p1=40;
    printf("\nfrom display a is: %d",*p);
    printf("\nfrom display b is: %d",*p1);
}