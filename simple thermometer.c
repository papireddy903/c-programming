#include<stdio.h>
int main()
{
    float temp;
    char fever;
    printf("what is your temperature?:");
    scanf("%f",&temp);
    fever=temp>37?printf("you have got fever!take care.."):printf("your temperature is %.1f,no fever!..");
    printf("%c",fever);
}
