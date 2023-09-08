#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter Your Number");
    scanf("%d",&n);
    for (i = 2; i <=n-1; i++)
    {
        if (n%i==0)
        {
            break;
        }
        
    }
    if (n==i)
    {
        printf("Prime No");
    }
    else
    {
        printf("Not Prime No");
    }
    return 0;
}