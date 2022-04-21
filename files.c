#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("D://filehandling/a.txt","w");
    char p[]="papi reddy";
    fprintf(fp,"%s",p);
    fclose(fp);

}