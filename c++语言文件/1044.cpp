#include<stdio.h>
using namespace std;
int score[4][4];
int main()
{
    int i,j,k,who;//i,j,k代表三家的跑二个的孩子
    score[1][1]=7;
    score[2][1]=8;
    score[3][1]=9;
    for(i=4; i<6; i++) /*i:张家孩子不是第四*/
        for(j=4; j<7; j++)
            for(k=4; i!=j&&k<7; k++)
                if(k!=i&&k!=j&&15-i-score[1][1]!=15-j-score[2][1]&&15-i-score[1][1]!=15-k-score[3][1]&&15-j-score[2][1]!=15-k-score[3][1])//第二三名不并列
                {
                    score[1][2]=i;
                    score[1][3]=15-i-7; /*将满足条件的结果记入数组*/
                    score[2][2]=j;
                    score[2][3]=15-j-8;
                    score[3][2]=k;
                    score[3][3]=15-k-9;
                }
    for(who=0,i=1; i<=3; i++/*,printf(" ")*/)
        for(j=1; j<=3; j++)
        {
            //printf("%d",score[i][j]); /*输出各家孩子的得分情况*/
            if(score[i][j]==1)
                who=i; /*记录最后一名的家庭序号*/
        }
    if(who==1) /*输出最后判断的结果*/
//printf("The last one arrived to end is a child from family Zhang. ");
        printf("Z\n");
    else if(who==2)
//printf("The last one arrived to end is a child from family Wang. ");
        printf("W\n");
    else
 //printf("The last one arrived to end is a child from family Li. ");
    printf("Li\n");
}
