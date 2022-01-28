#include<stdio.h>
int main()
{
    int i,n,p;
    printf("enter n:");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        p=n*i;
        printf("%d x %d = %d\n",n,i,p);
        i++;
    }
}
