#include<stdio.h>
int main()
{
    int n,i=0,s=0;
    printf("Enter The N");
    scanf("%d",&n);
while (i<=n)
{
    s=s+i;
    i++;
}

printf("%d",s);
return 0;
}