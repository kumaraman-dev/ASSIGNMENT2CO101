#include<stdio.h>
int main()
{
    int x,y=0;
    printf("Enter the number");
    scanf("%d",&x);
    while (x)
    {
        y=y*10+x%10;
        x=x/10;
    }
    printf("Reverse is %d",y);
}