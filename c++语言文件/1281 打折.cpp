#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n*95 < 300)
        {
            cout<<setiosflags(ios::fixed)<<setprecision(2)<<n*95<<endl;
        }
        else
        {
            double yuan = (n * 95) * 0.85;
            cout<<setiosflags(ios::fixed)<<setprecision(2)<<yuan<<endl;
        }
    }
    return 0;
}
