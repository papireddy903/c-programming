#include<stdio.h>
int main()
{
    int x,y;
    printf("enter x:");
    scanf("%d",&x);
    y=x--;
    y-=x;
    printf("value of y is %d",y);
    return 0;
}
