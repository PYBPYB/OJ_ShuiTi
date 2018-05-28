#include<stdio.h>
#include<stdlib.h>
#define PI 3.1415927
int main()
{
    double r,area;//定义两个变量
    while(scanf("%lf",&r)!=EOF)//无限次输入求半径
    {
        area=4*r*r*r*PI/3;//球的面积
        printf("%.3lf\n",area);//保留三位小数
    }
    return 0;
}
