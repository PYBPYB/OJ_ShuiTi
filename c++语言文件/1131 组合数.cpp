#include<iostream>
#include<math.h>
#include<iomanip>
#include<sstream>
using namespace std;

int main()
{
    int n,r;
    while(cin>>n>>r)
    {
        long long N = 1,M = 1;
        if(n-r >= r)
            r = n-r;

        for(int i = n; i>r; i--)
        {
            N *= i;
        }
        for(int i = (n-r); i>0; i--)
        {
            M *= i;
        }
        cout<<N/M<<endl;

    }
    return 0;
}
