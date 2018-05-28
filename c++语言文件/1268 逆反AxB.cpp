#include<iostream>
using namespace std;

int mun_nixu(int X)          //将任意数逆序
{
    int T = 0;
    while(X)
    {
        T *= 10;
        T += X%10;
        X /= 10;
    }
    return T;
}
int main()
{
    int A,B;
    while(cin>>A>>B)
    {
        cout<<mun_nixu(mun_nixu(A)*mun_nixu(B))<<endl;
    }
    return 0;
}
