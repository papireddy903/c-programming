#include<stdio.h>
int main()
{
    int i,n,prod;
    i=1,prod=1;
    printf("enter no of terms:");
    scanf("%d",&n);
    do{
        prod=prod*i;
        i++;
    }while(i<=n);
    printf("product of first %d numbers is %d",n,prod);
}
