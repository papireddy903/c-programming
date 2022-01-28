#include<stdio.h>
int main()
{
    int first=0,second=1,next,i,n;
    printf("enter no of terms:");
    scanf("%d",&n);
    printf("%d %d",first,second);
    i=3;
    do {
        next=first+second;
        printf(" %d ",next);
        first=second;
        second=next;
        i++;
    }while(i<=n);


}
