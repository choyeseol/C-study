#include <stdio.h>
int main()
{
    int n, t, max=0, i, j;
    
    printf("Please enter the number of numbers to enter. : ");
    scanf("%d", &n);
    printf("Please enter a number. : ");
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &t);
        if(max<t)
            max=t;
    }
    printf("The largest number is %d.", max);
    
    return 0;
}