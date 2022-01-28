#include<stdio.h>
int main()
{
    int a,b,sum,prod,div,sub;
    char operator;
    printf("enter the operator:");
    scanf("%c",&operator);
    printf("\nenter two operands: ");
    scanf("%d %d",&a,&b);
    switch(operator)
    {
    case '+':
        printf("sum=%d",a+b);
        break;
    case '-':
        printf("sub=%d",a-b);
        break;
    case '/':

        printf("div=%d",a/b);
        break;
    case '*':
        printf("prod=%d",a*b);
        break;
    default:
        printf("enter a valid operator");
    }
}
