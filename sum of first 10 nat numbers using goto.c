#include<stdio.h>
int main()
{

    int i,n,sum=0;


        printf("enter no of numbers:");
        scanf("%d",&n);
        end:
            printf("pls enter number greater than zero");
        if(n<0)
            goto end;
        else
            for (i=1;i<=n;i++)
            {
                sum=sum+i;
            }
            printf("sum is %d",sum);

}
