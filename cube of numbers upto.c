#include<stdio.h>
int main()
{
    int i,n,cube;
    printf("enter n:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        cube=i*i*i;
    printf("%d\n",cube);
}
