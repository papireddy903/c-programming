#include<stdio.h>
int main()
{

    int n,first=0,second=1,next,i;
    printf("enter no of elements:");
    scanf("%d",&n);
    printf("\n%d %d",first,second);
    for (i=3;i<=n;i++)
    {
        next=first+second;
        printf(" %d ",next);
        first=second;
        second=next;
    }


    {


    }
}
