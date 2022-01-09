//increment
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    b=++a;
    a+=b;
    printf("the updated value of a is %d",a);
    return 0;
}

