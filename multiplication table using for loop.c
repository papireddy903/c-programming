
#include <stdio.h>

int main()
{
    int n,i,p;
    printf("which multiplication table you want?: ");
    scanf("%d",&n);
    for (i=1;i<=10;i++)
     {
         p=n*i;
         printf("%d x %d = %d\n",n,i,p);
     }

}


