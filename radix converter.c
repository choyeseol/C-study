#include <stdio.h>
#include <string.h>
int main()
{
    char n[13];
    int t[100000]={};
    int a, i, j;
    
    printf("Please enter the radix you want to convert: ");
    scanf("%s",n);
    
    printf("Please enter the number you want to convert: ");
    scanf("%d",&a);
    
    if (strcmp(n,"binary")==0)
    {
        if(a==0)
            printf("0");
        while (a>0)
        {
            t[i]=a%2;
            a/=2;
            i++;
        }
        
        for (j=i-1;j>=0;j--)
            printf("%d",t[j]);
        printf("\n");
    }
    
    if (strcmp(n,"octal")==0)
        printf("%o",a);
    
    if (strcmp(n,"hexadecimal")==0) 
        printf("%x",a);
    
    else
        printf("Please enter again.");
        
    return 0;
}