#include <stdio.h>
int gcd(int x, int y)
{
    if(y==0)
        return x;
    else
        return gcd(y, x%y);
}
int main()
{
    int a, b;
    
    printf("Please enter two integers. : ");
    scanf("%d %d", &a, &b);
    
    printf("The greatest common denominator is %d.\n", gcd(a, b));
    
    return 0;
}