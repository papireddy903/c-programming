#include<stdio.h>
int main()
{
    int first=0,second=1,next,i,n;
    printf("enter no of terms");
    scanf("%d",&n);
    printf("%d %d ",first,second);
    i=3;
    while(i<=n)
    {
        next=first+second;
        printf(" %d ",next);
        first=second;
        second=next;
        i++;


    }


}
