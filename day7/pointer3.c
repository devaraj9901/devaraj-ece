#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int *p=arr;
    printf("The value is: %d \n",*p);  //10
    printf("The value is: %d \n",*(p+2));  //30
    printf("The value is : %d \n",*(*(&p)+2)); //30
    *(p+3)=100;
    printf("Array elemets are: \n");
    for(int i=0;i<5;i++){
        printf("%d \n",arr[i]);
    }
    printf("The ")
    return 0;
}