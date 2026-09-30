#include <stdio.h>
#include <stdlib.h>

int main()
{
    double area;
    const double PI=3.142;
    double r;
    printf("Please enter radius\n");
    scanf("%lf", &r);
    area=PI*r*r;
    printf("The area is %lf",area);
    return 0;
}
