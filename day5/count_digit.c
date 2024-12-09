#include<stdio.h>
int main(){
     int inputNumber=0,digit,countNumber=0;
    printf("enter a number:  ");
    scanf("%d",&inputNumber);

    while(inputNumber!=0){
        digit=inputNumber%10;
        countNumber++;
        inputNumber=inputNumber/10;
    }
   
    printf("the no of digit:%d",countNumber);
    return 0;
}