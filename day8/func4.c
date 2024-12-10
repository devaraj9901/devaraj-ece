#include<stdio.h>
int main(){
    int arr[10]={10,20,30,40,50};
    int data =50;
    for(int i=0;i<5;i++){
        if(arr[i]==data){
            printf("The position is :%d",i);
            break;
        }
    }
}