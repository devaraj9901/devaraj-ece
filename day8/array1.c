#include<stdio.h>
int main(){
    int arr[10]={10,34,50,2,5};
    int min = arr[0]; //10

    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The minimum element is %d",min);
    return 0;
}