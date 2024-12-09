#include<stdio.h>
int main(){
  int inputnumber=0;
  printf("Enter a number: ");
  scanf("%d",&inputnumber);
  if(inputnumber<0){
    printf("The number is less than 0");
  }
  else if(inputnumber>=0 && inputnumber<10){
    printf("The number is grater than or equals to 0 and less than 10");
  }
  else if(inputnumber>=10 &&inputnumber<20){
    printf("The number is grater than or equal to 10 and less than 20");
  }
  else{
    printf("The number is grater than or equal to 20");
  }
  return 0; 
  }
