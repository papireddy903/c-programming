#include<stdio.h>
int main()
{
    int year;
    printf("enter a year:");
    scanf("%d",&year);
    if (year%400==0)
        printf("yes,it is a leap year!");
    else if (year%100==0)
        printf("no,it is not a leap year!");
    else if (year%4==0)
        printf("yes,it is a leap year!");
    else
        printf("no,it is not a leap year!");
    return 0;
}
