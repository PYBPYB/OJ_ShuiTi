#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a[3];
    while(cin>>a[0]>>a[1]>>a[2])
    {
         cout<<setiosflags(ios::fixed)<<setprecision(a[2])<<1.0*a[0]/a[1]<<endl;
    }
  return 0;
}

