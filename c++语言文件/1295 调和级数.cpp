#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        double mun=0;
        for(int i=1;i<=n;i++)
        {
            mun += 1.0/i;
        }
        cout<<setiosflags(ios::fixed)<<setprecision(3)<<mun<<endl;
    }
    return 0;
}
