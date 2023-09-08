#include<stdio.h>
int main()
{
    int x,a,b,c;
    printf("\n1.Addition");
    printf("\n2.Substraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\nSelect The choice No");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
    printf("Enter Two Number");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);
        break;
    case 2:
    printf("Enter Two Number");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("%d",c);
    break;
    case 3:
    printf("Enter Two Number");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("%d",c);
    break;
    case 4:
    
    printf("Enter Two Number");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("%d",c);
    break;
    default:
    printf("Default");
        break;
    }
    return 0;
}