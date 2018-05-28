#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

struct riqi
{
    int nian;
    int yue;
    int ri;
}rq[100];

bool paixu (riqi a,riqi b)//用sort函数必须建一个compare.
{
    if(a.nian==b.nian)
    {
        if(a.yue==b.yue)
        {
            return a.ri<b.ri;
        }
        else
        {
            return a.yue<b.yue;
        }
    }
    else
    {
        return a.nian<b.nian;
    }
}

int main()
{
    int i = 0,j;
    while(scanf("%d/%d/%d",&rq[i].yue,&rq[i].ri,&rq[i].nian) != EOF)i++;
    sort(rq,rq+i,paixu);
     for(j=0;j<i;j++)
    {
        printf("%02d/%02d/%d\n",rq[j].yue,rq[j].ri,rq[j].nian);
    }
    return 0;
}
