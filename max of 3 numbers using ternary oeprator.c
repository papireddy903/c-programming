#include<stdio.h>
int main()
{

    int a,b,c,max;
    printf("enter the value of a ,b and c:");
    scanf("%d %d %d",&a,&b,&c);
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("max value of %d,%d and %d is %d",a,b,c,max);
    return 0;
}
