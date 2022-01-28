#include<stdio.h>
int main()
{

    int n,i;
    printf("enter no of terms:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {

        if(i%2!=0)
        {
            continue;
        }
        printf(" %d ",i);
    }

}
