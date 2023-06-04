#include <stdio.h>
int main()
{
    int n, m, i;
    
    printf("Please write down the number: ");
    scanf("%d", &n);
    
    printf("Please write down the multiple: ");
    scanf("%d", &m);
    
    
    for(i=0; i<=n; i++)
    {
        if(i%m!=0)
            printf("%d ", i);
    }
    
    return 0;
}