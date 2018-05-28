#include <iostream>
using namespace std;
int cins(int x[],int y[]); //输入
int go(int x[],int y[]);  //执行
int juedui(int s); //绝对值
int main()
{
    int x[1000],y[1000];
    int f;
    f=cins(x,y);
    cout<<f<<endl;
    return 0;
}
int cins(int x[],int y[])
{
    int a,b,c;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
        cin>>x[i];
    }
    for(int j=0; j<b; j++)
    {
        cin>>y[j];
    }
    c=go(x,y);
    return c;
}
int go(int x[],int y[])
{
    int t,min=9999;
    for(int l=0; x[l]; l++)
    {
        for(int k=0; y[k]; k++)
        {
            t=juedui(y[k]-x[l]);
            if(t<min)
            {
                min=t;
            }
        }
    }
    return min;

}
int juedui(int s)   //解决了绝对值问题！！！
{
    int c=s;
    if(s<0)
    {
        c=-s;
    }
    return c;
}
