#include<stdio.h>
int main()
{
    int num;
    printf("enter any number:");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("\n%d is even number!",num);

    }
    else
    {
        printf("\n%d is odd number!",num);
    }
    printf("\nthank you!");
}
