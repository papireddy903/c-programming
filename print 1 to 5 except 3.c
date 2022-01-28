#include<stdio.h>
int main()
{

    int n,i=0;
    while(i<5)
    {
        i++;
        if (i==3)
        {
            continue;
        }
        printf("\t%d",i);
    }
}
