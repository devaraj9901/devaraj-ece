#include<stdio.h>
int main(){
    //for loop(inside)
    printf("inside\n");
    for(int i=0;i<=5;i++){
        printf("%d \n",i);
    }

    printf("outside: \n");
    int j=0;
    for(j=0;j<=5;j++){
        printf("%d \n",j);
    }
}