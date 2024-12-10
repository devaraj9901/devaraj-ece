#include<stdio.h>
int main(){
    int arr[100]={10,34,50,2,5};
    int max = arr[0]; //10

    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The maximum element is %d",max);
    return 0;
}