#include<iostream>
using namespace std;

int mu_niu(int n,int N,int mun)
{
    if(n>=N)return mun;
    return mu_niu(n++,N,mun++);
}




int main()
{
    int N;
    while(cin>>N)
    {
        if(N<4)cout<<1<<endl;
        else{

            cout<<mu_niu(1,N,1)<<endl;
        }

    }

    return 0;
}
