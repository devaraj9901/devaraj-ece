#include<stdio.h>
int main(){
    int i=0;
    printf("Break: \n");
    for(i=0;i<=10;i++){
        printf("%d\n",i);
        if(i==5){
            break;
        }
    }

    printf("Continue\n");
    for(i=0;i<=10;i++){
        if(i==5){
            continue;
        }
        printf("%d\n",i);
    }

    return 0;
}
