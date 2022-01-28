#include <stdio.h>

int main() {
    int n,i=1,factor=0;
    printf("enter any number:");
    scanf("%d",&n);
    if (n<=0)
    printf("pls enter number greater than 1");
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        {
           factor++;
        }
    }
    if (factor==2)
    printf("prime");
    else
    printf("not prime");
}
