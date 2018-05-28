#include<iostream>
#include<iomanip>
#include<sstream>
#include<algorithm>
#include<cstdio>
using namespace std;

int run_nian(int n)
{
    if((n%4==0 && n%100 != 0)||(n%400 == 0))
        return 1;
    return 0;
}

int mun_ri(int y,int r)
{
    //cout<<r<<endl;;
    if(y-3 == 0)
        return r;
    else
    {
        if(y%2 == 0)
        {
            return mun_ri(y-1,r+30);
        }
        else
        {
            return mun_ri(y-1,r+31);
        }
    }
}

int main()
{
    int nian,yue,ri;
    while(3 == scanf("%d/%d/%d",&nian,&yue,&ri))
    {
        if(run_nian(nian) == 1)
        {
            int ri_mun = 60;
            if(yue == 1)
                cout<<ri<<endl;
            else if(yue == 2)
                cout<<31+ri<<endl;
            else
            {
                cout<<ri_mun+mun_ri(yue,ri)<<endl;
            }
        }
        else
        {
            int ri_mun = 59;
            if(yue == 1)
                cout<<ri<<endl;
            else if(yue == 2)
                cout<<31+ri<<endl;
            else
            {
                cout<<ri_mun+mun_ri(yue,ri)<<endl;
            }
        }
    }
    return 0;
}

