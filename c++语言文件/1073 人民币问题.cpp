#include<iostream>
#include<math.h>
#include<iomanip>
#include<sstream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int mun = 0;
        for(int i=1;i<=n/5;i++)
        for(int j=1;j<=n/2;j++)
        for(int k=1;k<=n;k++){
            if(i*5+j*2+k == n)
            mun++;
            }
            cout<<mun<<endl;
    }
    return 0;
}
