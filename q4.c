#include<stdio.h>
int main()
{
    int i=1,a=1,b=1,c=0,n;
    printf("Enter the n value");
    scanf("%d",&n);
    do
    {
        i++;
        printf(" %d",c);
        a=b;
        b=c;
        c=a+b;
    } while (i<=n);
    return 0;
}