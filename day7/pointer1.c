#include<stdio.h>
int main(){
    int n=10;
    int *p;
    p=&n;
    printf("The value of n: %d \n",n);
    printf("The value of n using pointer: %d \n",*p);
    printf("The value of p: %p \n",p);
    printf("The value of p using variable: %p \n",&n);
    printf("The address of p: %p \n",&p);
    // printf("The address of p using variable: %p\n",&(&n));
    printf("the address of n using pointer: %p \n",p);
    printf("The value of n without using var directly: %d \n",*(&n));
    return 0;
}