#include<stdio.h>
int main()
{
    int num;
    printf("enter any number:");
    scanf("%d",&num);
    if (num<0)
    {
        printf("\n%d is negative number!",num);
    }
    else if(num==0)
    {
        printf("\n0 is neither positive nor negative!",num);

    }
    else
    {
        printf("\n%d is positive number!",num);
    }
    printf("\nthank you");
}
