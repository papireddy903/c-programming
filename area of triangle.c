#include<stdio.h>
#include<math.h>
int main()
{

    int base,height;
    float area;
    printf("enter base and height values:");
    scanf("%d%d",&base,&height);
    area=(base*height)/2;
    printf("the area of triangle is %.2f",area);
    return 0;
}
