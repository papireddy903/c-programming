#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    c=a&b;
    d=a|b;
    e=a^b;
    f=~a;
    g=a<<2;
    h=b>>1;
    printf("\nBitwise AND -> %d\n",c);
    printf("Bitwise OR -> %d\n",d);
    printf("Bitwise XOR -> %d\n",e);
    printf("Bitwise COMPLEMENT ->  %d\n",f);
    printf("Bitwise LEFT SHIFT -> %d\n",g);
    printf("Bitwise RIGHT SHIFT -> %d\n",h);
    return 0;

  }
