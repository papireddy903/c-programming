#include<stdio.h>
int main()
{
    float C,F;
    printf("enter temperature in celsius:");
    scanf("%f",&C);
    F=1.8*C+32;
    printf("temperature in fahrenheit is %.1fF ",F);
}
