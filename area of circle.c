#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    int radius;
    float area;
    printf("enter the value of radius:");
    scanf("%d",&radius);
    area=pi*radius*radius;
    printf("the area of circle is %.2f",area);
    return 0;
}
