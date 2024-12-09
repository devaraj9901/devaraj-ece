#include<stdio.h>
int main(){
    int var1;
    float var2;
    char var3;
    double var4;
    char var5[20];
    char var6[100];

    printf("Enter a integer value: \n");
    scanf("%d",&var1);
    printf("Enter a float value: \n");
    scanf("%f",&var2);
    getchar();

    printf("Enter a char: \n");
    scanf("%c",&var3);

    printf("Enter a double: \n");
    scanf("%lf",&var4);

    printf("Enter a word: \n");
    scanf("%s",&var5);
    getchar();
    printf("Enter a sentence: \n");
    scanf("%[^\n]s",&var6);

    printf("The integer value is: %d\n",var1);
    printf("The float value is: %f\n",var2);
    printf("The char value is: %c\n",var3);
    printf("The double value is: %lf\n",var4);
    printf("The word is: %s\n",var5);
    printf("The sentence  is: %s\n",var6);

    return 0;
}