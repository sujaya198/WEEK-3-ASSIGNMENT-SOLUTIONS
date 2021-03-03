#include<stdio.h>
int square(int a);
void main()
{
    int n, r;
    printf("Enter the number you want to find the square of: ");
    scanf("%d", &n);
    r = power(n);
    printf("The square of the entered number is %d .", r);
}
int power(a)
{
    int r1;
    r1 = a*a;
    return(r1);
}
