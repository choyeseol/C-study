#include <stdio.h>
typedef struct STUDENT{
    int no;
    int inf;
    int mat;
    int sum;
    double avg;
} student;

int main()
{
    student a[200];
    int n, i;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d", &a[i].no, &a[i].inf, &a[i].mat);
        a[i].sum = a[i].inf + a[i].mat;
        a[i].avg = a[i].sum/2.0;
    }
    for(i=0; i<n; i++)
        printf("%d %d %.1f\n", a[i].no, a[i].sum, a[i].avg);
    
    return 0;
    
}