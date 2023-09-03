#include<stdio.h>
int main()
{
    int a,p=1,i=1;
    printf("Enter the number whose factorial you want to find");
    scanf("%d",&a);
    while (i<=a)
    {
        p=p*i;
        i++;
    }
    printf("%d",p);
    return 0;
}