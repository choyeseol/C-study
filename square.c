#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    float y;

    float result;

    printf("Enter a number to square. :");
    scanf("%f", &x);

    printf("How many squares would you like to do? :");
    scanf("%f", &y);

    result = powf(x, y);
    
    printf("The %.2f squared of %.2f is %.2f.\n", x, y, result);
    
    return 0;
}
