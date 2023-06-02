#include <stdio.h>
int f(int y)
{
    if(y%400==0)
        return 0;
    if(y%4==0 && y%100!=0)
        return 1;
    else
        return 0;
}
main()
{
    int y;

    scanf("%d", &y);

    if(f(y))
        printf("윤년");
    else
        printf("평년");
}