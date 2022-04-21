#include<stdio.h>
int main()
{
    FILE *fp;
    char var[7]="eppala";
    fp=fopen("D://filehandling/a.txt","a");
    if (fp==NULL)printf("file cannot be opened\n");
    else{
        
        
        fprintf(fp,var);
    }
    fclose(fp);
}