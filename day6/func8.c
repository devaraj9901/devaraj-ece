#include<stdio.h>
int fact(int);
int main(){
    int inputNumber,res;
    printf("Enter a number: \n");
    scanf("%d",&inputNumber);

    res=fact(inputNumber);
    printf("The sum is: %d",res);
    return 0;
}

int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
