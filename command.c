#include <stdio.h>
#include <stdlib.h>
int main()
{
// open two files to be merged
FILE *fp1 = fopen("D:/filehandling/s.txt" , "r");
FILE *fp2 = fopen("D:/filehandling/m.txt" , "r");
// open file to store the results
FILE *fp3 = fopen ("D:/files/r.txt" , "w");
char c;
if(fp1==NULL||fp2==NULL||fp3==NULL)
    {
        puts("could not open files");
            exit(0);
    }
    //copy contents of first file to file3.txt
    while((c= fgetc(fp1))!= EOF)
        fputc(c, fp3);
    //copy contents of second file to file3.txt
    while((c= fgetc(fp2))!=EOF)
    fputc(c, fp3);
    printf("merged s.txt and m.txt into r.txt");
fclose(fp1);
fclose(fp2);
fclose(fp3);

return 0;
}
