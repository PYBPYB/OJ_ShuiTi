#include<stdio.h>
#include<stdlib.h>
#define PI 3.1415927
int main()
{
    double r,area;//������������
    while(scanf("%lf",&r)!=EOF)//���޴�������뾶
    {
        area=4*r*r*r*PI/3;//������
        printf("%.3lf\n",area);//������λС��
    }
    return 0;
}
