#include <stdio.h>
int main() 
{
    int h, m;
    int n, t;
    
    printf("How many minutes ago are you curious? :");
    scanf("%d", &n);
    printf("Please enter the current time. :");
    scanf("%d %d",&h,&m);

    t = h * 60 + m;
	t = t - n;
	
	if ( t < 0 )
	{ 
		h = 23;
		m = 60 + t;
	}
	
	else
	{
		h = t / 60;
		m = t % 60;
	}
	
	printf("The time 30 minutes ago is %d : %d", h, m);

    return 0;

}