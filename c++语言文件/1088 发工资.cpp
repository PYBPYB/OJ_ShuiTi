#include<iostream>
using namespace std;

int Y = 0;

int min_qian(int qian)
{
    if(qian >= 100)
    {
        Y += qian/100;
    }
    else if(qian >= 50)
    {
        Y += qian/50;
    }
    else if(qian >= 20)
    {
        Y += qian/20;
    }
    else if(qian >= 10)
    {
        Y += qian/10;
    }
    else if(qian >= 5)
    {
        Y += qian/5;
    }
    else if(qian >= 2)
    {
        Y += qian/2;
    }
    else if(qian >= 1)
    {
        Y += qian;
        return Y;
    }
    Y = 0;
}

int main()
{
    int n;
    while(cin>>n)
    {
        int mun = 0;
        if(n == 0)
            return 0;
        else
        {
            int a[n];
            for(int i = 0; i <n; i++)
            {
                cin>>a[i];
                mun += min_qian(a[i]);
            }
            cout<<mun<<endl;

        }
    }
    return 0;
}
