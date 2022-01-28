#include<stdio.h>
int main()
{

    int tel,hin,eng,mat,sci,soc;
    float avg;
    printf("enter the marks of all subjects:");       //max marks for each subject is 100
    scanf("%d %d %d %d %d %d",&tel ,&hin ,&eng ,&mat ,&sci,&soc);
    avg=(float)((tel+hin+eng+mat+sci+soc)/6);
    printf("\nyour avg score is %.2f:\n",avg);

    if (avg>=91&& avg<=100)
        printf("you got A+ grade!");
    else if (avg>=71 && avg<=90)
        printf("you got A grade!");
    else if (avg>=61 && avg<=70)
        printf("you got B+ grade!");
    else if (avg>=51 && avg<=60)
        printf("you got B grade!");
    else if (avg>=41 && avg<=50)
        printf("you got C grade!");
    else if (avg<=40)
        printf("Sorry,you are failed!");



}
