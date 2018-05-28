#include<iostream>
using namespace std;

int li_fang_shu(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i*i*i == n)return 1;
    }
    return 0;
}

int main()
{
    int n;
    int mun=0;
    while(cin>>n)
    {
        if(n == 0)
        {
            cout<<mun<<endl;
            return 0;
        }
        if(li_fang_shu(n) == 1)mun++;
    }
    return 0;
}
