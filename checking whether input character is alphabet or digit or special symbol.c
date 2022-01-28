#include<stdio.h>
int main()
{
    char ch;
    printf("enter any character:");
    scanf("%c",&ch);
    if ((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
        printf("\n%c is an alphabet",ch);
    else if (ch>='0' )
        printf("\n%c is a digit!\n",ch);
    else
        printf("%c is a special symbol!",ch);
    return 0;
}

