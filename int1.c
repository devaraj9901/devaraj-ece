#include<stdio.h>
#include<string.h>
// 1. strlen() ---> to get len of str
// 2. strcpy() ---> to copy a str
// 3. strcat() ---> concat two str
// 4. strupr() ---> to convert string to upr
// 5. strlwr() ---> convert  tp lower 
// 6. strcmp() ---> to compare two strings
// 7. stricmp() ---> to compare two strings 
int main(){
    //strlen
    int str1[100]="9901";
    int res=strlen(str1);
    printf("the length of integer %d is : %d",str1,res);
    return 0;