#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        double fen[n];
        for(int i = 0 ; i < n ; i ++)
        {
            cin>>fen[i];
        }
        sort(fen,fen+n);
        double mun = 0;
        for(int i = 1 ; i < n-1 ; i ++)
        {
            mun += fen[i];
        }
       cout<<setiosflags(ios::fixed)<<setprecision(2)<<mun/(n-2)<<endl;
    }
    return 0;
}
