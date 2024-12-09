#include<stdio.h>
int main(){
    char arr[5];
    printf("Enter the array elements: \n");
    for(char i=0;i<5;i++){
        scanf("%c",&arr[i]);
    }
    printf("Array elemets are: ");
    for(char i=0;i<5;i++){
        printf("%c ",arr[i]);
    }
    return 0;
}
