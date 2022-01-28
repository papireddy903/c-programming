#include<stdio.h>
int main()
{
    int sum=0,i,n;
    printf("enter n value:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
}
