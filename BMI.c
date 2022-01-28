#include<stdio.h>
int main()
{

    float height,weight,BMI;
    int option;
    printf("********************************WELCOME TO BMI CALCULATOR*********************************");
    printf("\nJust enter your weight and height to know your BODY MASS INDEX");
    printf("\nenter your height(m):");
    scanf("%f",&height);
    printf("\nenter your weight(kg):");
    scanf("%f",&weight);
    BMI=weight/(height*height);
repeat:
    if (BMI>=50)
        printf("********SUPER OBESE**********");
    else if (BMI>=40.1 && BMI <50)
        printf("*********MORBID OBESE*********");
    else if (BMI>=30 && BMI<=40)
        printf("**********OBESE**********");
    else if (BMI>=25 && BMI<30)
        printf("**********PRE OBESE**********");
    else if (BMI>=23 && BMI<25)
        printf("***********OVER WEIGHT***********");
    else if (BMI>=18.5 && BMI<23)
        printf("***********NORMAL***********");
    else
        printf("***********UNDERWEIGHT***********");
printf("\ndo you want check again(press 1 for yes and  2 for no)");
if (option ==1)
    goto repeat;
else
    printf("bye!");


}
