#include<stdio.h>
int main()
{
    int s=0;
    for (int i = 2; i <=100; i=i+2)
    {
        s=s+i;
        
    }
    printf("%d",s);
    return 0;
}