#include<stdio.h>
int main(){
    int a=0,b=0,choice=0;
    do{
    printf("Enter you choic: \n");
    printf("1: add\n");
    printf("2: sub\n");
    printf("3: mul\n");
    printf("4: div\n");
    printf("5: mod\n");
    printf("6: exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:{
            printf("Enter 2 no for add: \n");
            scanf("%d %d",&a,&b);
            printf("add of %d and %d is : %d",a,b,a+b);
            break;
        }
        case 2:{
            printf("Enter 2 no for sub: \n");
            scanf("%d %d",&a,&b);
            printf("sub of %d and %d is : %d",a,b,a-b);
            break;
        }
        case 3:{
            printf("Enter 2 no for mul: \n");
            scanf("%d %d",&a,&b);
            printf("mul of %d and %d is : %d",a,b,a*b);
            break;
        }
        case 4:{
            printf("Enter 2 no for div: \n");
            scanf("%d %d",&a,&b);
            printf("div of %d and %d is : %d",a,b,a/b);
            break;
        }
        case 5:{
            printf("Enter 2 no for mod: \n");
            scanf("%d %d",&a,&b);
            printf("mod of %d and %d is : %d",a,b,a%b);
            break;
        }
        case 6:{
            printf("Exiting......");
            break;
        }
        default:{
            printf("invalid choice");
        }
    }
    }while(choice!=6);
    return 0;
}