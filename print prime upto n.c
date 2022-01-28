#include<stdio.h>
int main()
{

    int i,j,n,factor=0;
    printf("enter n:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        factor=0;
        for (j=1;j<=i;j++)
        {
            if (i%j==0)
            factor++;
        }
     if (factor==2)
            printf(" %d ",i);
    }


}
