#include<stdio.h>
int main(){
    int inputnumber=0;
    printf("Enter a number:\n");
    scanf("%d",&inputnumber);
    if(inputnumber%2==0){
        printf("the given character is upper");
    }
    else{
        printf("the given character is lower");
    }
    return 0;
}