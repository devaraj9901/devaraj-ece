#include<stdio.h>
int main(){
    char arr[5];
    printf("Enter the array elements: \n");
    for(int i=0;i<5;i++){
        scanf("%c",&arr[i]);
        getchar();
    }
    printf("Array elemets are: \n");
    for(int i=0;i<5;i++){
        printf("%c \n",arr[i]);
    }
    return 0;
}