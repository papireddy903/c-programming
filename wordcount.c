//Word,Line and Character Count in a FILE

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("D:/filehandling/c.txt","w+");
    if(fp == NULL)
    {
        printf("Cannot Open\n");
        exit(0);
    }
    char str[500] = "srm\nuniversity";
    fputs(str,fp);
    printf("Number of Character = ");
    int n = ftell(fp);
    printf("%d",n-2);
    rewind(fp);
    printf("\nNumber of Words = ");
    char ch = fgetc(fp);
    int r1=0,r2=0;
    while(ch!=EOF)
    {
        if(ch == ' ' || ch == '\n')
            r1++;
        ch = fgetc(fp);
    }
    printf("%d",r1+1);
    rewind(fp);
    printf("\nNumber of Lines = ");
    ch = fgetc(fp);
    while(ch!=EOF)
    {
        if(ch == '\n')
            r2++;
        ch = fgetc(fp);
    }
    printf("%d",r2+1);
    fclose(fp);
    return 0;
}