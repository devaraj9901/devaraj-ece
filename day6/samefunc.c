#include<stdio.h>
// function dec
int sum(int a, int b);
int main(){
    int a=10,b=50,res;
    res=sum(a,b);
    printf("the sum of %d and %d is %d\n",a,b,res);
    res=(10+20);
    printf("the sum of 10 and 20 is %d \n",res);
    res=(20+30);
    printf("the sum of 20 and 30 is %d\n",res);
    res=(50+50);
    printf("the sum of 50 and 50 is %d",res);
    return 0;
}

//function definition
int sum(int a, int b){   
    int res=a+b;
    return res;
}
