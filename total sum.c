#include <stdio.h>
#include <string.h>
int main()
{
    int eenum=0, oonum=0;
    int i, n;
    char a[10]={};
    
    printf("Write whether the sum you want to find is even or odd. :");
    scanf("%s", a);
    
    printf("Write down the number you want to get.: ");
    scanf("%d", &n);
    
    
    if(strcmp(a, "even")==0)
    {
        for(i=1; i<=n; i++)
            if(i%2==0)
                eenum+=i;
        printf("The sum of all even numbers up to %d is %d.", n, eenum);
    }
    
    else if(strcmp(a, "odd")==0)
    {
        for(i=1; i<=n; i++)
            if(i%2!=0)
                oonum+=i;
        printf("The sum of all odd numbers up to %d is %d.", n, oonum);
    }  
    
    else
        printf("Please re-enter.");
        
    return 0;
}
