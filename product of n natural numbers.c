#include<stdio.h>
int main()
{
    int i,n,factorial=1;
    printf("enter n:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        factorial=factorial*i;
        i++;

    }
    printf("%d",factorial);
}
