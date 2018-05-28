#include<iostream>
#include<iterator>
using namespace std;

int main()
{
    for(int i = 50; i<100;i++)
    {
        int T = i*i;
        int a,b,c,d;
        a = T / 1000;
        b = (T /100)%10;
        c = (T / 10)%10;
        d = T%10;
        if(a == b && c == d)cout<<T<<endl;;
    }
    return 0;
}

