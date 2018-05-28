#include<stdio.h>
#include<math.h>
#define pi 4.0*atan(1.0)

main()
{
    int n;

    scanf("%d",&n);

    printf("%.3lf %.3lf",sin(n/180.0*pi),cos(n/180.0*pi));
}
