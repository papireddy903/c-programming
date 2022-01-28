#include<stdio.h>
int main()
{

    int n,i,sum=0;
    printf("enter no of terms:");
    scanf("%d",&n);
    i=1;
    do{
        sum=sum+i;
        i++;



    }while(i<=n);
    printf("sum of first %d natural numbers is %d",n,sum);
}

