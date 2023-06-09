#include <stdio.h>
int main()
{
    int n, m, i;
    
    printf("Please enter a number to determine. : ");
    scanf("%d", &n);
    printf("Please enter multiple to determine. : ");
    scanf("%d", &m);
    
    if(n%m==0)
        printf("%d is a multiple of %d.", n, m);
    else
        printf("%d is not a multiple of %d.", n, m);
        
    return 0;
    
}