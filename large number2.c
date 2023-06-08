#include <stdio.h>
int main()
{
    int n, t, i;
    int max=0, min=1000000000;
    
    printf("Please enter the number of numbers to enter. : ");
    scanf("%d", &n);
    printf("Please enter a number. : ");
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &t);
        if(max<t)
            max=t;
        if(min>t)
            min=t;
    }
    printf("The largest number is %d.\n", max);
    printf("The small number is %d.", min);
    
    return 0;
}