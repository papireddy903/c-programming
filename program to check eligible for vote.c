#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("\nyou are eligible for voting!",age);

    }
    else
        printf("\nyou are not eligible for voting",age);
    printf("\nthank you");
}
