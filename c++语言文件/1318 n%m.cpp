#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int n,m;
        cin>>n>>m;
        int mun = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            mun += i%m;
        }
        cout<<mun<<endl;
    }
    return 0;
}
