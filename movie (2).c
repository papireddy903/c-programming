#include<stdio.h>
#include<stdlib.h>
int main()
{

    int sign_in,exit,cost,paymode,choice,comfort,i,j,noofseats,date,movieselect,seat_no,seat_no1,seat_no2,seat_no3,seat_no4,seat_numbers;
    float time,convenience_fees,total_cost;
    char Venue,click;


   repeat:
    printf("\t\t\t\t\t\tBookMyShow.It all starts here!\n (press ENTER to continue)");
    scanf("&c",&click);
    system("cls");

    printf("\t\t\t1.book tickets\n");
    printf("\t\t\t2.cancel tickets\n");
    scanf("%d",&choice);
    system("cls");
    printf("\t\t\tpress 1 for Bangarraju \n\t\t\tpress 2 for akhanda\n\t\t\tpress 3 for spiderman no way home\n");
    scanf("%d",&movieselect);
    system("cls");
    switch(choice)
    {
    case 1:
        {
            printf("             All eyes this way please\n");
            printf("         -----------------------------------\n");
            printf("        ||            screen               ||\n ");
            printf("         -----------------------------------");

            printf("\n");
            for (j=1;j<=10;j++)
            {


                printf(" %d    ",j);

            }
            printf("\n\n");
             for (i=11;i<=100;i++)
             {
                 printf(" %d   ",i);
              if (i%10==0)
                printf("\n\n");
             }
        printf("How many seats?\n   1 2 3 4 \n  Balcony     platinum\n    150         250\n");

        scanf("%d",&noofseats);
        printf("press 1 for Balcony ,press 2 for platinum");
        scanf("%d",&comfort);

        switch(noofseats)
        {

        case 1:
            {
                printf("Please select a seat number: ");
                scanf("%d",&seat_no1);

                break;

            }
        case 2:
            printf("Please select two seats numbers: ");
            scanf("%d %d",&seat_no1,&seat_no2);


            break;
        case 3:
            printf("Please select three seats numbers: ");
            scanf("%d %d %d",&seat_no1,&seat_no2,&seat_no3);
            break;
        case 4:
            printf("Please select four seats numbers: ");
            scanf("%d %d %d %d",&seat_no1,&seat_no2,&seat_no3,&seat_no4);
            break;
        }

        system("cls");



        printf("Please select the date: \n   SUN     MON     TUE     WED\n    27      28      29       30\n   JAN     JAN     JAN     JAN\n");
        scanf("%d",&date);
        printf("Please select the time: \n 11.00AM      2.00PM      5.30PM      9.00PM\n");
        scanf("%f",&time);
        system("cls");
        if (comfort==1)
        {
            cost=noofseats*150;
            convenience_fees=cost/10;
            total_cost=cost+convenience_fees;
        }
        else
        {


            cost=noofseats*200;
            convenience_fees=cost/10;
            total_cost=cost+convenience_fees;
        }
        printf("Choose Payment mode\n");
        printf("1.UPI\n2.Debit/3.credicard\n4.Net Banking\n");
        scanf("%d",&paymode);
        printf("Payment done!");

        }

    }
    system("cls");


        switch(movieselect)
        {
        case 1:
            printf("-------------------------------------------------------\n");
            printf("=========================================================\n");
            printf("\nBooking ID=WT4WNXL        showname=Bangarraju(Telugu 2D)\n");
            printf("\t                          Time:%.2f\n",time);
            printf("\t                          ticket cost=%.2f\n",total_cost);
            printf("\t                          Date:%d/1/2022",date);
            printf("\nVenue----Cinepolis:PVP Square Mall,Vijayawada----");
            printf("\n=========================================================\n");
            break;
        case 2:
            printf("-------------------------------------------------------\n");
            printf("=========================================================\n");
            printf("\nBooking ID=WT4WNXL        showname=Akhanda(Telugu 2D)\n");
            printf("\t                          Time:%.2f\n",time);
            printf("\t                          ticket cost=%.2f\n",total_cost);
            printf("\t                          Date:%d/1/2022",date);
            printf("\nVenue----Cinepolis:PVP Square Mall,Vijayawada----");
            printf("\n=========================================================\n");
            break;
        case 3:
            printf("-------------------------------------------------------\n");
            printf("=========================================================\n");
            printf("\nBooking ID=WT4WNXL        showname=Spiderman No Way Home(Telugu 3D)\n");
            printf("\t                          Time:%.2f\n",time);
            printf("\t                          ticket cost=%.2f\n",total_cost);
            printf("\t                          Date:%d/1/2022",date);
            printf("\nVenue----Cinepolis:PVP Square Mall,Vijayawada----");
            printf("\n=========================================================\n");
            break;



        }
        printf("press 0 button to go to main page\n");
        scanf("%d",&exit);
        if (exit==0)
            goto repeat;











}
