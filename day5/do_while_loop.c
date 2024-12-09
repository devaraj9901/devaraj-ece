#include<stdio.h>
int main(){
   int inputNumber=0;
   printf("enter a number: \n");
   scanf("%d",&inputNumber);
   int i=0;
   do{
    printf("%d\n",i);
    i++;
   }while(i<=inputNumber);
    return 0;
}
  