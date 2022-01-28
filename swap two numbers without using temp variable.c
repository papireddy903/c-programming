#include<stdio.h>
int main()
{

    int a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    printf("\nbefore swapping\n a=%d  b=%d ",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swapping\n  a=%d  b=%d",a,b);
    return 0;
}
