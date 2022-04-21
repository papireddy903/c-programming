#include<stdio.h>
#include<string.h>
void swap(char *a,char *b){
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
void permute(char *a,int l,int r){
    int i;
    if (l==r)
    {
        printf("%s\n",a);

    }
    else
    {
        for (i=l;i<=r;i++)
        {
            swap(a+l,a+i);
            permute(a,l+1,r);
            swap(a+l,a+i);
        }
    }
}


int main(void)
{
    int t=5;
    while(t--)
    {
        char s[100];
        scanf("%s",s);
        int n=strlen(s);
        int i,l=0,r=n-1;
        permute(s,l,r);
    }
}