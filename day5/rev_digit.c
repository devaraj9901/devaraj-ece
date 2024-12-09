#include<stdio.h>
int main(){
     int inputNumber=0,revNumber=0,digit;
    printf("enter a number:  ");
    scanf("%d",&inputNumber);

    while(inputNumber!=0){
        digit=inputNumber%10;
        revNumber = (revNumber*10)+digit;
        inputNumber=inputNumber/10;
    }
    printf("The reverse of a number is : %d",revNumber);
    return 0;
}