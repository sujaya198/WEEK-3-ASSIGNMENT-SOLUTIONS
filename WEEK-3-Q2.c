#include<stdio.h>
int factorial(int n);
void main()
{
    int n1, r;
    printf("Enter the number you want to find the factorial: ");
    scanf("%d", &n1);
    r= factorial(n1);
    printf("The factorial is %d .", r);
}
int factorial(n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return(fact);
}
