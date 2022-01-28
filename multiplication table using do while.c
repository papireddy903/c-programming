#include<stdio.h>
int main()
{
    int n,i=1,p;
    printf("enter which table you want:");
    scanf("%d",&n);
    do {
        p=n*i;
        printf("%d x %d = %d\n",n,i,p);
        i++;
       }while(i<=10);
}
