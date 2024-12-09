#include<stdio.h>
int sumOfNaturalNo(int);
int main(){
    int inputNumber,res;
    printf("Enter a number: \n");
    scanf("%d",&inputNumber);

    res=sumOfNaturalNo(inputNumber);
    printf("The sum is: %d",res);
    return 0;
}

int sumOfNaturalNo(int n){
    if(n==1){
        return 1;
    }
    return n+sumOfNaturalNo(n-1);
}
