#include<stdio.h>
int main()
{
    int n,s=0;
    printf("Enter A number");
    scanf("%d",&n);
    for (int i = 1; i <n; i++)
    {
        if (n%i==0)
        {
            s=s+i;
        }
        
    }
    if (s==n)
    {
        printf("Perfect number");
    }
    else{
        printf("Not Perfect Number");
    }
    return 0;
}