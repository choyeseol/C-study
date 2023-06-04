#include <stdio.h>
int main()
{
    char arr[20]={};
    int i;

    scanf("%s", arr);

    for(i=0; arr[i]!='\0'; i++)
        printf("%c", arr[i]+2);
    printf("\n");
    for(i=0; arr[i]!='\0'; i++)
        printf("%c", (arr[i]*7)%80+48);

    return 0;
}