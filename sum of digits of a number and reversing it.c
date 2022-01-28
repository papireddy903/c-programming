#include<stdio.h>
int main()
{
    int sum=0,rev=0,rem,n;
    printf("enter any number:");
    scanf("%d",&n);
    for (sum=0,rev=0;n>0;sum+=rem,n/=10)
    {
        rem=n%10;
        rev=rev*10+rem;



    }
    printf("sum of digits is %d",sum);
    printf("\nreversal is %d",rev);
}
